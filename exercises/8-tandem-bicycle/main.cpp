#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "solutions/A-tandem-bicycle.h"

using namespace std;

int main()
{
    auto redShirtSpeeds = { 5, 5, 3, 9, 2 };
    auto blueShirtSpeeds = { 3, 6, 7, 2, 1 };
    auto fastest = true;
    auto expected = 32;
    auto totalSpeed =
        SolutionA::tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest);
    std::cout << "outputA: " + std::to_string(totalSpeed) << std::endl;

    // Assertions
    assert(expected == totalSpeed);
}