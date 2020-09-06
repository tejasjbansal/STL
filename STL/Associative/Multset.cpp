// TOPIC: std::multiset

// NOTES:
// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide 
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.

#include<iostream>
#include<set>
#include <iterator> 
#include<string>
#include<functional>
using namespace std;

int main(){
    multiset<int> MultiSet = {1,2,3,4,5,1,2,3,4,5};
    multiset<int,greater <int>> MultiSet2 = {1,2,3,4,5,1,2,3,4,5};
    multiset <int> :: iterator itr; 
    multiset <int, greater <int> > :: iterator itr1;

    for(itr = MultiSet.begin(); itr != MultiSet.end(); ++itr){
        cout<<*itr<<endl;
    }
    cout<<"-----------------------";
    for(itr1 = MultiSet2.begin(); itr1 != MultiSet2.end(); ++itr1){
        cout<<*itr1<<endl;
    }
}