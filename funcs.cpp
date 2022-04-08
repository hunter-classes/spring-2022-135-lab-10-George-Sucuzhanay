#include <iostream>
#include "funcs.h"
#include "time.h"

void printTime(Time time) 
{
    std::cout << time.h << ":" << time.m << std::endl;
}

int minutesSinceMidnight(Time time)
{
    int result = (time.h * 60) + time.m;
    return result;
}

int minutesUntil(Time earlier, Time later)
{
    int countEarlier = minutesSinceMidnight(earlier);
    int countLater = minutesSinceMidnight(later);
    int difference = countLater - countEarlier;
    return difference;
}