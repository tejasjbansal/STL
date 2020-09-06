// NOTES:
// 0. std::priority_queue is a container adaptor that provides constant time lookup of the 
//    largest OR smallest element.
// 1. By default std::vector is the container used inside.
// 2. Cost of insertion and extraction is logarithmic.
// 3. std::priority_queue is implemented using std::make_heap, std::push_heap, std::pop_heap functions.

#include<iostream>
#include<queue>
#include<vector>
#include<functional>

template<typename T> void print_queue(T& q){
    while(!q.empty()){
        std::cout<< q.top() << " ";
        q.pop();
    }
    std::cout<< "\n";
}

int main(){
    {
        std::priority_queue<int>q;
        for(int e: {1,8,5,1,4,65,7,2,7,2})
        {
            q.push(e);
        }
        print_queue(q);

    }
    
    {
        std::priority_queue<int,std::vector<int>, std::greater<int>>q2;
        for(int e: {1,8,5,1,4,65,7,2,7,2})
        {
            q2.push(e);
        }
        print_queue(q2);
    }
    {
        auto cmp = [](int left,int right){
            return (left) < (right);
        };
        std::priority_queue<int,std::vector<int>,decltype(cmp)> q3(cmp);
        for(int e: {1,8,5,1,4,65,7,2,7,2})
        {
            q3.push(e);
        }
        print_queue(q3);
    }

}