// Topic: std::pair.
// NOTES:
// 0. std::pair is a struct template that provides a way to store two heterogeneous objects as a single unit.
// 1. map, multimap, unorder_map, unorder_multimap can use pair to insert data into their structures.

#include<iostream>
#include<vector>
using namespace std;

void print(std::pair<int,int>& obj){
    cout<<obj.first<<" "<<obj.second<<endl;
}
int main(){
    {
        std::pair<int,int> obj(10,20);
        print(obj);
    }
    {
        std::pair<int,int>obj = std::make_pair(10,20);
        print(obj);
    }
    {
        std::vector<std::pair<string,int>>list;
        list.push_back(make_pair("tejash",1));
        list.push_back(make_pair("yash",2));

        for(auto& e: list){
            cout<<e.first<<" "<<e.second<<endl;
        }
    }
}