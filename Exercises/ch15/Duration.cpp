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
    this->day = 0;
}

Duration :: Duration(int s){
    this->total_secs = s;
    this->second = s%60;
    this->minute = (s%3600) / 60;
    this->hour = (s % 86400) / 3600;
    this->day = (s/86400);
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
    if (day > 0){
        ss << day << "D"; 
    }
    ss << "T";
    if(hour > 0){
        ss << hour << "H";
    }
    if (minute > 0){
        ss << minute << "M";
    }
    if (second > 0){
        ss << second << "S";
    }
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

