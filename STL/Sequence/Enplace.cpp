// TOPIC: Emplace In STL

// 1. All the containers supports insert and emplace operation to store data. 
// 2. Emplace is used to construct object in-place and avoids unnecessary copy of objects.
// 3. Insert and Emplace is equal for premetive data types but when we deal with heavy objects
//    we should use emplace if we can for efficiency.

#include<iostream>
#include<set>
using namespace std;
class A{
    public:
    int x;
    A(int x){
        this->x= x;
        cout<<"construct"<<endl;
    };
    A(const A& obj){
        x=obj.x;
        cout<<"Copy"<<endl;
    }
};

bool operator < (const A& obj2,const A& obj3){
    return obj2.x < obj3.x;
}

int main(){
    set<A> Set;
    // A a(10);
    // Set.insert(a);
    Set.emplace(2);
    for(auto& el: Set){
        cout<<el.x;
    }
    return 0;
}