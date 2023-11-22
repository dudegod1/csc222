#include <iostream>
#include "random.h"


int random::random_between(){
    srand(time(NULL));
    int i = rand() % (right-left) + left;
    return i;
}

random::random(int l, int h){
    if(l > h){
        left = h;
        right = l;
    }else{
        left = l;
        right = h;
    }
}
