#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_set>
#include<climits>
using namespace std;
struct Point {
    int x, y;

    // Overload the equality operator to compare Points
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// Custom hash function for unordered_set
struct PointHash {
    size_t operator()(const Point& p) const {
        return hash<int>()(p.x) ^ hash<int>()(p.y); // Combine hashes of x and y
    }
};

unordered_set<Point, PointHash> getPoints(int a,int b,int xk,int yk){
   unordered_set<Point, PointHash> ans;
    Point p1;
    p1.x = xk + a;
    p1.y = yk + b;

    Point p2;
    p2.x = xk + a;
    p2.y = yk - b;
    

    Point p3;
    p3.x = xk - a;
    p3.y = yk + b;
    

    Point p4;
    p4.x = xk - a;
    p4.y = yk - b;

    Point p5;
    p5.x = xk + b;
    p5.y = yk + a;

    Point p6;
    p6.x = xk - b;
    p6.y = yk - a;

    Point p7;
    p7.x = xk + b;
    p7.y = yk - a;

    Point p8;
    p8.x = xk - b;
    p8.y = yk + a;

    ans.insert(p1);
    ans.insert(p2);
    ans.insert(p3);
    ans.insert(p4);
    ans.insert(p5);
    ans.insert(p6);
    ans.insert(p7);
    ans.insert(p8);
    return ans;
}
void checkPos(int a, int b, int xk, int yk, int xq, int yq){
    

    unordered_set<Point, PointHash> King = getPoints(a,b,xk,yk);
    unordered_set<Point, PointHash> Queen = getPoints(a,b,xq,yq);

    int count=0;
    for(auto p:King){
        if(Queen.find(p)!=Queen.end()){
            count++;
        }
    }

    cout<<count<<endl;

}
int main(){
    int a,b,xk,yk,xq,yq,n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        checkPos(a,b,xk,yk,xq,yq);
    }
}