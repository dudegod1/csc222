#include <iostream>

using namespace std;

void shuffle_one(int a[]){
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        int j = rand()%(i+1);

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }

}

void shuffle_two(int a[]){
    int new_arr [10];
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        int j = rand()%(i+1);

        int temp = a[i];
        new_arr[i] = a[j];
        new_arr[j]  = temp;

    }
    

}



int main(){
    
    int nums[] = {43, 54, 32, 325, 5325, 14, 654 ,75, 74, 78};
    for(int i = 0; i < 10; i ++){
        cout << nums[i] << endl;

    
    }
    shuffle_one(nums);  
    shuffle_two(nums);
    return 0;

}
