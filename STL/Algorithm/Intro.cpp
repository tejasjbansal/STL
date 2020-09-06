// TOPIC: STL Algorithms

// NOTES:
// 0. STL algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) 
// 1. Algorithms are applied to range of elements.

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    std::vector<int> Vect{1,2,3,45,6,7};
    std::vector<int>::iterator it = find(Vect.begin(),Vect.end(),45);

    if(it==Vect.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }
}