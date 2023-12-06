#include <iostream>
#include <cmath>
#include "Complex.h"
#include <assert.h>

using namespace std;

    
    Complex::Complex(){
        real = 0; 
        imag = 0;
        polar = false;
    }
    Complex::Complex(double r, double i){
        real = r; 
        imag = i;
        polar = false;
    }
    double Complex::get_real(){
        return real;
    }
    double Complex::get_imag(){
        return imag;
    }
    void Complex::calc_polar(){
        mag = sqrt((real*real) + (imag*imag));
        theta = atan(imag/real);
        polar = true;
    }

    double Complex::get_mag(){
        if(polar == false) calc_polar();
        return mag;
    }
    double Complex::get_theta(){
        if(polar == false) calc_polar();
        return theta;
    }
    string Complex::get_cartesian(){
        return to_string(get_real()) + ", " + to_string(get_imag()) + " i";
    }
    string Complex::get_polar(){
        string theta = to_string(get_theta());
        string mag = to_string(get_mag());
        return mag + "e^" + theta + "i";
    }
    Complex Complex:: operator + (const Complex& c){
        return Complex(real + c.real, imag + c.imag);
    }
    Complex Complex:: operator - (const Complex& c){
        return Complex(real - c.real, imag - c.imag);
    }
    Complex::Complex(double m, double t, Flag){
        mag = m;
        theta = t;
        polar = true;
        calc_cart();
    }
    void Complex::calc_cart(){
        assert(polar == true);
        real = mag * cos(theta);
        imag = mag * sin(theta);
    }
    Complex Complex:: operator * (Complex& c){
        if (polar == false) calc_polar();
        if (c.polar == false) c.calc_polar();
        return Complex(this->mag * c.mag, this->theta + c.theta, POLAR);
    }
    Complex Complex:: operator / (Complex&c){
        if (polar == false) calc_polar();
        if (c.polar == false) calc_polar();
        return Complex(this->mag * (1/c.mag), this->theta-c.theta, POLAR);
    }
   double Complex::abs(){
        if (polar == false) calc_polar();
        if (this-> mag < 0){
            return double(mag * -1);
        }
        else{
            return mag;
        }
   }

ostream& operator<<(ostream& os, const Complex& cnum){
    os << cnum.mag << endl;
    return os;
}
