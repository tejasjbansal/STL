// TOPIC: list In STL

// 1. This is double linked list what we know from C prgramming language.
// 2. List is sequence container that allow non-contiguous memory allocation.
// 3. List is faster compared to other sequence containers (vector, forward_list, deque) in terms of 
//    insertion, removal and moving elements in any position provided we have the iterator of the position. 
// 4. We should use this class instead of traditional double linked list because
//    a. Well tested
//    b. Bunch of available function
// 5. Few Available Operations
//    operator =, assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back, push_front
//    pop_front, reverse, sort, merge, splice, unique, remove, remove_if, resize.

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> List = {5,2,3,4,6};
    list<int> List1 = {5,22,2,44,6};

    List.sort();
    List1.sort();
    for(auto it=List.begin();it!=List.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=List1.begin();it!=List1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=List.begin();it!=List.end();it++){
        if(*it==3){
            List.splice(it,List1);
        }

    }
    for(auto it=List.begin();it!=List.end();it++){
        cout<<*it<<" ";

    }
    
}