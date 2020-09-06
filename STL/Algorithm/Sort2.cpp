// NOTES:
// 0. Checks if the elements in range [first, last) are sorted in non-descending order.

// TYPES:
// 1. Can check integral data types
// 2. Can check user defined data types
// 3. Can check using a function object
// 4. Can check using lambda expression
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> Vec{5,4,67,5,72,55,26};
    sort(Vec.begin(),Vec.end(),greater<int>());
    for(auto it=Vec.begin();it!=Vec.end();it++){
        cout<<(*it)<<" ";
    }
}