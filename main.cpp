#include <iostream>
#include "funcs.h"
#include "time.h"

int main()
{
    Time later;    // creates a new variable (or object)
    later.h = 13;  // assigns its hours field
    later.m = 40;  // assigns its minutes field 
    std::cout << later.h << std::endl;
    printTime(later);
    std::cout << "<--------->" << std::endl;
    std::cout << minutesSinceMidnight(later) << std::endl;
    Time earlier;
    earlier.h = 10;
    earlier.m = 30;

    std::cout << minutesUntil(earlier, later) << std::endl;
    return 0;
}