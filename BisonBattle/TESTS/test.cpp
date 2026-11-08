/**
 * @file test.cpp
 * @brief unit tests for game loop!! 
 */
#include "catch_amalgamated.hpp"
#include "../Pile.h"

TEST_CASE("Pile draws from the top and adds to the bottom", "[pile]")
{
    Pile<int> pile;
    pile.addTop(1);
    pile.addTop(2);
    pile.addBottom(0);          // bottom to top: 0, 1, 2
    REQUIRE(pile.drawTop() == 2);
    REQUIRE(pile.drawTop() == 1);
    REQUIRE(pile.drawTop() == 0);
    REQUIRE(pile.isEmpty());
}