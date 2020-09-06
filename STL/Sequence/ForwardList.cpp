// TOPIC: forward_list In STL

// 1. This is single linked list what we know from C programming language.
// 2. Why forward_list why not single_list ?
// 3. We should use this class instead of traditional single linked list because
//    a. Well tested
//    b. Bunch of available function
// 4. Few Available Operations
//    operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge
//    splice_after, unique, remove, remove_if, resize

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> list1 = {1,2,34,5};
    forward_list<int> list2 = {5,2,34,5};
    //list1.reverse();

    //list1.insert_after(list1.begin(),8);

    // list1.sort();
    // list2.sort();
    // list1.merge(list2);

    //list1.splice_after(list1.begin(),list2);

    list1.remove_if([] (int n){
        return n > 4;
    });

    for(auto it=list1.begin();it!=list1.end();it++){
        cout<<(*it)<<" ";
    }
}