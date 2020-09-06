#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> Vec{5,4,67,5,72,55,26};
    auto it = is_sorted_until(Vec.begin(),Vec.end());
    auto diff = distance(Vec.begin(),it);
    cout<<diff<<endl;
}