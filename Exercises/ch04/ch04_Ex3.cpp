#include <iostream>
using namespace std;

void compare(int a, int b){
    if (a>b) {
        cout << "A is greater" << endl;
    }
    else if(a<b){
        cout << "B is greater" << endl;
    }
    else if(a==b){
        cout << "A and B are equal" << endl;
    }
}

int main(){
    compare(2,2);
}
