//Topic: std::array

//Syntax std::array<T,N> array;

//Notice
//1. std::array is a container that encapsulates fixed sized arrays.
//2. arraysize is needed at compile time.
//3. Access Elements:
//   a. at()
//   b. []
//   c. front()
//   d. back()
//   e. data()  //gives access to the underlying array

#include<iostream>
#include<array>
using namespace std;

 int main(){
     std::array<int,5>myarray= {1,2,3,4,5};
     std::array<string,2>mystring = {"hello","like"};
     std::array<int,5>myarray2;
     myarray2.fill(10);
     for(int i=0;i<5;i++)
     cout<<myarray2[i];
     cout<<endl;
    cout<<myarray.size();
    cout<<endl;
    cout<<myarray.data();
    cout<<endl;
    cout<<myarray.front();
    cout<<endl;
    cout<<myarray.back();
    cout<<endl;
    cout<<mystring.at(0);
 }