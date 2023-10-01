#include <iostream>
using namespace std;

struct Point {
    double x,y;
};
struct Rectangle {
    Point corner;
    double length, width;
};

Point lowerRight(Rectangle& box){
    double x = box.corner.x + box.width;
    double y = box.corner.y - box.length;
    Point result = {x,y};
    return result;
}
void printP(Point& p){
    cout << p.x << ',' <<p.y << endl;
}

void findArea(Rectangle r){
    cout << (r.length * r.width) << endl;
}
int main(){
    Rectangle r = {{0.0,0.0}, 100.0, 200.0};
    Point p = lowerRight(r);
    printP(p);
    findArea(r);
    return 0;

}
