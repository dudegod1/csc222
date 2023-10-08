#include <iostream>
#include <string>


using namespace std;

void str_len(string s){
    int count = 0;
    for(int i =0; i < s.length(); i++){
        count++;
    }
    cout << count << endl;
}

int main(){
    str_len("Hello");
    return 0;
}
    
