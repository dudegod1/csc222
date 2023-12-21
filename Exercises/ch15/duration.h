#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Duration {
    int day, hour, minute, second;
    int total_secs;
    public:
    Duration();
    Duration(int s);
   
    int days();
    int hours();
    int minutes();
    int seconds();

    string to_string() const;
    Duration operator + (Duration D);
    Duration operator - (Duration D);
};

