// NOTES:
// 0. std::unordered_multiset is an associative container that contains set of possibly non-unique objects.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, because after computing the hash of the value it refers to 
//    the exact bucket the element is placed into.

// WHY UNORDERED_MULTISET
// 0. maintain a collection of non-uniqe items with fast insertion and removal.

#include<iostream>
#include<unordered_set>
#include <iterator> 

using namespace std;

int main(){
    std::unordered_multiset<int> MultiSet = {1,2,9,4,5,1,2,7,4,5};
    
    std::unordered_multiset <int> :: iterator itr; 
    

    for(itr = MultiSet.begin(); itr != MultiSet.end(); ++itr){
        cout<<*itr<<endl;
    }
    cout<<endl;
    cout<<MultiSet.count(5) << endl;
}