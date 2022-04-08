#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "time.h"
#include "timeslot.h"


TEST_CASE("TASK A: Time After Midnight"){
    Time now = {17, 45};    
    CHECK(minutesSinceMidnight(now) == 1065);
    now = {17, 22};
    CHECK(minutesSinceMidnight(now) == 1042);

}
TEST_CASE("TASK A: Minutes Until"){
    Time later = {13,40};
    Time earlier = {10, 30};
    CHECK(minutesUntil(earlier, later) == 190);
}
TEST_CASE("TASK B: Add Minutes"){
    Time startOb = {8, 10};
    startOb = addMinutes(startOb, 75);
    CHECK(startOb.h == 9);
    CHECK(startOb.m == 25);
}
TEST_CASE("TASK C: Print Movie"){
    Movie m = {"Back to the future", COMEDY, 120};
    CHECK(getMovie(m) == "Back to the future COMEDY (120 min)");
}
TEST_CASE("TASK C: Print Timeslot"){
    Movie m  = {"Back to the Future", COMEDY, 120};
	TimeSlot t = {m, {1, 20}};
    CHECK(getTimeSlot(t) == "Back to the Future COMEDY (120 min) [starts at 1:20, ends by 3:20]");
}
