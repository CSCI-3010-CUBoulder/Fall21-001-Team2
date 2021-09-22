#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Testing fibonacci", "[fibonacci]") {
    REQUIRE(NthFibonacci(1) == 0);
    REQUIRE(NthFibonacci(3) == 1);
    REQUIRE(NthFibonacci(11) == 55);
    REQUIRE(NthFibonacci(16) == 610);
    REQUIRE(NthFibonacci(18) == 1597);
}

TEST_CASE("Testing vector sum", "[vecsum]") {
    // Create vector
    std::vector<int> myVecOne{1, 2, 3, 4, 5};
    std::vector<int> myVecTwo{2, 3, 4, 5, 6};

    REQUIRE(Sum(myVecOne) == 15);
    REQUIRE(Sum(myVecTwo) == 20);
}