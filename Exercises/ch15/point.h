#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Point {
    double x,y;
    
    Point();
    Point(c1, c2);
    string to_string();
    Point  operator + (const Point& c);
    Point  operator - (const Point& c);
};
