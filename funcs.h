#pragma once
#include "time.h"
#include "movie.h"
#include "timeslot.h"
#include <iostream>

void printTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
std::string getTime(Time time);
std::string getMovie(Movie mv);
std::string getTimeSlot(TimeSlot ts);
