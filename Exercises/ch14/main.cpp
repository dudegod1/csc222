#include <iostream>
#include "random.h"


int main(){

    random r(1, 5);
    int j = r.random_between();
    cout << j << endl;
    return 0;
} 
