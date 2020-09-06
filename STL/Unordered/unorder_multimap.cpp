// NOTES:
// 0. Unordered multimap is an unordered associative container that supports equivalent keys (an unordered_multimap may contain multiple copies of each key value) and that associates values of another type with the keys. 
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, since once a hash is computed,
//    it refers to the exact bucket the element is placed into.

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    std::unordered_multimap<int,char> umm = {{1,'a'},{2,'b'},{2,'c'}};
    umm.insert({1,'b'});
    umm.insert(std::make_pair(2,'c'));

    for(auto& e:umm){
        cout<<e.first<<" "<<e.second<<endl;
    }

}
