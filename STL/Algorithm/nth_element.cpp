#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    std::vector<int> myvector;
    for (int i=1; i<10; i++) myvector.push_back(i);
    nth_element(myvector.begin(),myvector.begin()+4,myvector.end());
    for(auto it=myvector.begin();it!=myvector.end();it++){
        cout<<(*it)<<" ";
    }
}