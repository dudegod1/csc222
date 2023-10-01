#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void increment(Time& time, double secs){
    time.second += secs;
    while (time.second >= 60.0){
        time.second -= 60.0;
        time.minute+=1;
        if (time.minute>=60.0){
            time.minute -= 60.0;
            time.hour +=1;
        }
    }
}
void print_time(Time& t){
    cout << t.hour << ':' << t.minute << ':' << t.second <<endl;
}
int main(){
    Time t = {12,5,4.2};
    increment(t, 1200000.0);
    print_time(t);
    return 0;
}
