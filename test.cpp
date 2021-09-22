#include "catch2/catch.hpp"
#include "functions_to_implement.cpp"

SECTION("Testing fibonacci", "[fibonacci]") {
    REQUIRE(NthFibonacci(1) = 0);
    REQUIRE(NthFibonacci(3) = 1);
    REQUIRE(NthFibonacci(11) = 55);
    REQUIRE(NthFibonacci(16) = 610);
}