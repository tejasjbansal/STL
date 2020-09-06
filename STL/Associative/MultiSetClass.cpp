#include<iostream>
#include<set>
#include <iterator> 
using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& obj)const{
        return age<obj.age;
    }
    bool operator > (const Person& obj)const{
        return age>obj.age;
    }
};

int main(){
    multiset<Person> Set ={{30,"Tejash"},{25,"Hitesh"},{22,"john"},{30,"Tejash"},{25,"Hitesh"},{22,"john"}};
    multiset<Person, std::greater<>> Set2 ={{30,"Tejash"},{25,"Hitesh"},{22,"john"},{30,"Tejash"},{25,"Hitesh"},{22,"john"}};
    for(const auto& e: Set){
        cout<<e.age << " " << e.name <<endl;
    }
    for(const auto& e: Set2){
        cout<<e.age << " " << e.name <<endl;
    }
}