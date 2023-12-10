#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point:: Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(int c1,int c2){
    this->x = c1;
    this->y = c2;
}

string Point::to_string() const{
   return "("+ std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator + (const Point& p){
    Point p3(this->x + p.x, this->y + p.y);
    return p3;
}
Point Point::operator - (const Point& p){
    Point p3(this->x -  p.x, this->y -  p.y);
    return p3;
}

Point Point::operator * (int val){
    Point p3(this->x * val, this-> y * val);
    return p3;
}

double Point::distance(Point& p2){
    return double(sqrt(pow(this->x + p2.x, 2) + pow(this->y + p2.y, 2)));
}

    
double distance(Point& p1, Point& p2){
    return double(sqrt(pow(p1.x + p2.x, 2) + pow(p1.y + p2.y, 2))); 
}
