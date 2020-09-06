// TOPIC: Map In C++

// NOTES:
// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.

#include<iostream>
#include<iterator>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main(){
    map<int, int> gquiz1;
    map<string, int> gquiz2;
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz2["Tejash"] = 123;

  
    // printing map gquiz1 
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
    cout<<gquiz2["Tejash"] << endl;
}
