// TOPIC: std::vector      
// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

#include<iostream>
#include<vector>
using namespace std;
int main(){
    std::vector<int> arr;
    std::vector<int> arr2{5,20};
    std::vector<int> arr3={1,2,3,4,5};
    std::vector<int> arr4 {1,2,34,5,5};

    arr.push_back(10);
    cout<<arr.at(0)<<endl;

    for(int i=0;i<arr3.size();i++)
    cout<<arr3[i]<<"\t";
    cout<<endl;

    for(int i=0;i<10;i++){
        arr.push_back(i);
        cout<<arr.size() << " " << arr.capacity() << endl;
    }

    arr.insert(arr.begin(),5);
    cout<<arr[0];

}