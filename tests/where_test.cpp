#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>


#include "../src/where.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE(find("The quick brown fox", 'e') == 2);
    REQUIRE(find("The quick brown fox", ' ') == 3);
    REQUIRE(find("The quick brown fox", 'z') == -1);
    REQUIRE(find("The quick brown fox", "e") == 2);
    REQUIRE(find("The quick brown fox", "quick") == 4);
    REQUIRE(find("The quick brown fox", "quiet") == -1);
    REQUIRE(find("The quick brown fox", "") == -1);
    REQUIRE(find("", "a") == -1);
}
