#include <iostream>
using namespace std;

void overloaded_function(int a){
    //int a=0;
    cout << a+1 << endl;
}

int main(){
    overloaded_function(1);
}
