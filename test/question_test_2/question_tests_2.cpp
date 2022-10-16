#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("Verify swap values by reference and by value functions")
{
	REQUIRE(swap_values_reference(10, 20) == 20, 10);
	REQUIRE(swap_values_value(10, 20) == 20, 10);
}