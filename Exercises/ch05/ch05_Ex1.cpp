#include <iostream>
#include <cmath>
using namespace std;

void distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    cout << result << endl;
}

int main(){
    distance(1.0, 2.0, 4.0, 6.0);
}
