#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction :: Fraction(){
    numerator = 0;
    denominator = 1;
}

Fraction :: Fraction(int n, int d){
    numerator = n;
    denominator = d;
}

void Fraction :: print(){
    cout << numerator << "/" << denominator << endl;
}

void Fraction :: add(int num){
    numerator += num * denominator;
}

void Fraction :: minus(int num){
    numerator -= num*denominator;
}

void Fraction :: times(int num){
    numerator *= num;
}

void Fraction :: divide(int num){
    denominator *= num;
}
