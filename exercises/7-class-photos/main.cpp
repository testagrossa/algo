#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "solutions/A-class-photos.h"

using namespace std;

int main()
{
    vector<int> redShirtHeights = { 5, 8, 1, 3, 4 };
    vector<int> blueShirtHeights = { 6, 9, 2, 4, 5 };
    bool expected = true;
    auto actual = SolutionA::classPhotos(redShirtHeights, blueShirtHeights);

    bool outputA = SolutionA::classPhotos(redShirtHeights, blueShirtHeights);
    std::cout << "outputA: " << std::boolalpha << outputA << std::endl;

    // Assertions
    assert(actual == expected);
}
