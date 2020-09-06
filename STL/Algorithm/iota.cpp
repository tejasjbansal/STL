// TOPIC: STL ALGORITHM std::iota

// NOTES:
// 0. Fills the range [first, last) with sequentially increasing values,
//    starting with value and repetitively evaluating ++value.
// #std::iota #CppNuts #STL
#include<iostream>
#include<algorithm>
#include<list>
#include<numeric>

using namespace std;
int main(){
    list<int> lst(10);
    std::iota(lst.begin(),lst.end(),0);
    for(auto it=lst.begin();it!=lst.end();it++){
        cout<<(*it)<<" ";
    }
}