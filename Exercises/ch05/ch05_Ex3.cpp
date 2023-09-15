#include <iostream>
using namespace std;

void overloaded_function(int a){
    //int a=0;
    cout << a+1 << endl;
}

void overloaded_function(int a,int b){
    cout << a+2 << endl;
}
void overloaded_function(int a,int b,int c){
    cout << a+3 << endl;
}
void overloaded_function(int a,int b,int c,int d){
    cout << a+4 << endl;
}
void overloaded_function(int a,int b,int c,int d,int e){
    cout << a+5 << endl;
}
int main(){
    overloaded_function(1);
    overloaded_function(1,2);
    overloaded_function(1,2,3);
    overloaded_function(1,2,3,4);
    overloaded_function(1,2,3,4,5);
}
