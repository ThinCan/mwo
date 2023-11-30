#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../lib.hpp"


TEST_CASE("Test lib_add") {
    CHECK(add(1, 15) == 16);
}