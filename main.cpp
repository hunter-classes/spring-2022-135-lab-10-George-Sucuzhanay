#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"
#include <string>
#include <iostream>


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
    Time startOb = {8, 10};
    std::cout << "<--------->" << std::endl;

    startOb = addMinutes(startOb, 75);
    std::cout << "{" << startOb.h << "," << startOb.m << "}" << std::endl;


    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 

    Movie m = {"Back to the future", COMEDY, 120};
    std::cout << getMovie(m) << std::endl;

    Movie b  = {"Back to the Future", COMEDY, 120};
    TimeSlot t = {b, {1, 20}};
    std::cout << getTimeSlot(t) << std::endl;

    return 0;
}