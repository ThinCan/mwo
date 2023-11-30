#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <cstdlib>

TEST_CASE("CicdTest - ReturnCodeTest") {
    #ifdef CICD_ASD
    int returnCode = std::system("cicdtest");
    CHECK(returnCode == CICD_ASD);
    #else
    int returnCode = std::system("cicdtest");
    CHECK(returnCode == -1);
    #endif
}