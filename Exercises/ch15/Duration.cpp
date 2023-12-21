#include <iostream>
#include "Duration.h"
#include <string>
#include <sstream>

using namespace std;

Duration :: Duration(){
    this->total_secs = 0;
    this->second = 0;
    this->minute = 0;
    this->hour = 0;
}

Duration :: Duration(int s){
    this->total_secs = s;
    int temp_s = s;
    int temp_m = 0;
    int temp_h = 0;
    int temp_d = 0;
    if (temp_s >= 60){
        second = temp_s%60;
        temp_m = temp_s/60;
        if (temp_m >= 60){
            temp_h = temp_m % 60;
            minute = temp_m/60;
            if(temp_h >= 24){
                hour = temp_h%24;
                day = temp_h/24;
            }
        }
    }
}


int Duration::days(){
    return day;
}

int Duration::hours(){
    return hour;
}

int Duration::minutes(){
    return minute;
}

int Duration::seconds(){
    return second;
}


string Duration::to_string() const {
    stringstream ss;
    ss << "P";
    if (second <= 0) {
        ss << "T0S";
        return ss.str();
    }
    ss << day << "D" << hour << "H" << minute << "M" << second << "S";
    return ss.str();
}


Duration Duration::operator + (Duration D){
    Duration Time(total_secs + D.total_secs);
    return Time;
}
Duration Duration::operator - (Duration D){
    Duration Time(total_secs - D.total_secs);
    return Time;
}

