// NOTES:
// 0. std::deque is an indexed sequence container.
// 1. It allows fast insertion at both beginning and end.
// 2. Unlike vector elements of deque are not stored contiguous.
// 3. it uses individual allocated fixed size array, with additional bookkeeping, meaning index based access to deque
//    must perform two pointer dereference, but in vector we get in one dereference.
// 4. The storage of a deque is automatically expanded and contracted as needed.
// 5. Expansion of deque is cheaper than expansion of vector.
// 6. A deque holding just one element has to allocate its full internal array (e.g. 8 times the object size on 
//    64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger, on 64-bit libc++).

// TIME COMPLEXITY:
// Random access - constant O(1)
// Insertion or removal of elements at the end or beginning - constant O(1)
// Insertion or removal of elements - linear O(n)

#include <iostream> 
#include <deque> 
  
using namespace std; 
  
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
    deque <int> gquiz; 
    gquiz.push_back(10); 
    gquiz.push_front(20); 
    gquiz.push_back(30); 
    gquiz.push_front(15); 
    cout << "The deque gquiz is : "; 
    showdq(gquiz); 
  
    cout << "\ngquiz.size() : " << gquiz.size(); 
    cout << "\ngquiz.max_size() : " << gquiz.max_size(); 
  
    cout << "\ngquiz.at(2) : " << gquiz.at(2); 
    cout << "\ngquiz.front() : " << gquiz.front(); 
    cout << "\ngquiz.back() : " << gquiz.back(); 
  
    cout << "\ngquiz.pop_front() : "; 
    gquiz.pop_front(); 
    showdq(gquiz); 
  
    cout << "\ngquiz.pop_back() : "; 
    gquiz.pop_back(); 
    showdq(gquiz); 
  
    return 0; 
} 