// TOPIC: STL Algorithm partial_sort

// NOTES:
// 0. partial_sort rearranges elements such that the range [first, middle) contains the sorted elements.
// 1. The order of equal elements is not guaranted to be preserved.
// 2. The order of remaining elements is unspecified.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> Vec{5,4,67,5,72,55,26};
    partial_sort(Vec.begin(),Vec.begin()+4,Vec.end());
    for(auto it=Vec.begin();it!=Vec.end();it++){
        cout<<(*it)<<" ";
    }
}