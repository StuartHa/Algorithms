#include "quick_sort.h"

#include <catch2/catch.hpp>

#include <vector>

TEST_CASE("Basic sort") {
    std::vector<int> in = {2, 1, 5, 3, 4};
    quick_sort(in.begin(), in.end());
    REQUIRE(in == std::vector<int>({1, 2, 3, 4, 5}));
}

TEST_CASE("Reverse-sorted input") {
    std::vector<int> in = {6, 5, 4, 3, 2, 1};
    quick_sort(in.begin(), in.end());
    REQUIRE(in == std::vector<int>({1, 2, 3, 4, 5, 6}));
}

TEST_CASE("Empty input") {
    std::vector<int> in;
    quick_sort(in.begin(), in.end());
    REQUIRE(in.empty());
}

TEST_CASE("Single element input") {
    std::vector<int> in = {4};
    quick_sort(in.begin(), in.end());
    REQUIRE(in == std::vector<int>{4});
}
