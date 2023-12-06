#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include "Complex.h"


using namespace std;


TEST_CASE("Test consttructors"){
    Complex cnum1;
    CHECK(cnum1.get_cartesian() == "0.000000, 0.000000 i");
}
