#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    void print();
    void increment(double secs);
    Time(int h, int m, double s);
};

void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::increment(double secs){
    second += secs;

    if(second >= 60){
       int  temp = int(second/60);
        minute += temp;
        second -= 60*temp;
    }

    if(minute >= 60){
        int temp = int(minute/60);
        hour += temp;
        minute -= 60*temp;
    }




}
Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

int main(){
    Time current_time = {9, 13, 30.0};
    current_time.increment(500.0);
    current_time.print();
    return 0;}       
