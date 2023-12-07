#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point:: Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(double c1, double c2){
    this->x = c1;
    this->y = c2;
}

string Point :: to_string(){
    return x.to_string() + ", " + y.to_string();
}
