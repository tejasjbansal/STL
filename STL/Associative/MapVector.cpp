#include<iostream>
#include<iterator>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main(){
    map<string, vector<int>> gquiz2;

    gquiz2["Tejash"].push_back(123);
    gquiz2["Tejash"].push_back(1234);
    gquiz2["Tejash"].push_back(12345);
    gquiz2["yash"].push_back(123);

    for(auto& e1: gquiz2){
        cout<<e1.first << endl;
        for(auto& e2: e1.second){
            cout<<e2 << endl;
        }
        cout<<endl;
    }

  
}
