
// TOPIC: Multimap In C++

// NOTES:
// 1. Multimap is an associative container that contains a sorted list of key-value pairs, 
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted order on the basis of key (assending/decending).
// 3. Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound
// 5. We dont have at() and [] functions to get element like we had in std::map.

#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    multimap<char, int> gquiz2;
    gquiz2.insert(make_pair('a',1));
    gquiz2.insert(make_pair('a',2));
    gquiz2.insert(make_pair('a',3));
    gquiz2.insert(make_pair('a',1));
    gquiz2.insert(make_pair('b',1));

    for(auto& e: gquiz2){
        cout<<e.first<<" "<<e.second<<endl;
    }
    cout<<endl;
    auto range = gquiz2.equal_range('a');
    for(auto it=range.first; it!=range.second;it++){
        cout<<(*it).first<<" "<<it->second<<endl;
    }
    cout<<gquiz2.count('a')<<endl;
    auto pair = gquiz2.find('a');
    cout<<pair->first<<" "<<pair->second<<endl;
}
