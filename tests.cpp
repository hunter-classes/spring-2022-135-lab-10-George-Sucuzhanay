#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "time.h"


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
