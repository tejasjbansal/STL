#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class point{
    public:
    int x;
    int y;
    point(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }
    bool operator < (const point& p1){
        return (x+y)<(p1.x+p1.y);
    }
};

int main(){
    std::vector<point> Vec{{1,2},{3,1}};
    sort(Vec.begin(),Vec.end());
    for(auto e: Vec){
        cout<<e.x<<" "<<e.y<<endl;
    }
}