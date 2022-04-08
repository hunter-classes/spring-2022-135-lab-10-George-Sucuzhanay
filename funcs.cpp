#include <iostream>
#include <string>
#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

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
Time addMinutes(Time time0, int min){
    int countHours = min / 60;
    int countMins = min - (countHours * 60); // this is the same as min % 60
    time0.h += countHours;
    time0.m += countMins;
    return time0;
}

std::string getMovie(Movie mv){
    std::string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    return mv.title + " " + g + " (" + std::to_string(mv.duration) + " min)";
}
std::string getTime(Time time)
{
	time.h += time.m / 60;
	time.m %= 60;
	return std::to_string(time.h) + ":" + (time.m < 10 && time.m > 0 ? "0" : "") + std::to_string(time.m) + (time.m == 60 || time.m == 0 ? "0" : "");
}

std::string getTimeSlot(TimeSlot ts){
    std::string movie = getMovie(ts.movie);
    Time tm = addMinutes(ts.startTime, ts.movie.duration);
    movie += " [starts at " + getTime(ts.startTime) + ", ends by " + getTime(tm);
	return movie + "]";
}

