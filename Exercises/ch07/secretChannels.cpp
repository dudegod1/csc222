#include <iostream>
#include <string>
using namespace std;
void secretOutput(int num){
    string stri=to_string(num);
    int array[4];
    for (int i=3;i>=0;i--){
        array[i]=num%10;
        num=num/10;
    }
    cout<< array[2] << endl;
}

int main(){
    secretOutput(0123);
}
