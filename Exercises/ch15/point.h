#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Point {
    int x,y;
    
    Point();
    Point(int c1, int c2);
    string to_string() const;
    Point  operator + (const Point& c);
    Point  operator - (const Point& c);
    Point operator * (int val);
    double distance(Point& p2);
};

double distance(Point& p1, Point& p2);
