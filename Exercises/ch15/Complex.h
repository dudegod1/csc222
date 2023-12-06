
#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>

using namespace std;

enum Flag{POLAR};

class Complex{
    double real, imag;
    double mag, theta;
    bool polar;
    
    public:
    Complex();
    Complex(double r, double i);
    double get_real();
    double get_imag();
    void calc_polar();
    double get_mag();
    double get_theta();
    string get_cartesian();
    string get_polar();
    Complex operator + (const Complex& c);
    Complex operator - (const Complex& c);
    Complex(double m, double t, Flag);
    void calc_cart();
    Complex operator * (Complex& c);
    Complex operator / (Complex&c);
    double abs();
    friend ostream& operator<<(ostream& os, const Complex& cnum);
};
