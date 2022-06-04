#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "lib/utils.h"
#include "solutions/A-sorted-squared-array.h"
#include "solutions/B-sorted-squared-array.h"

using namespace std;

int main()
{
    vector<int> inputArray = { 1, 2, 3, 5, 6, 8, 9 };
    vector<int> expected = { 1, 4, 9, 25, 36, 64, 81 };

    vector<int> outputA = SolutionA::sortedSquaredArray(inputArray);
    std::cout << "outputA: " + vectorToString(outputA) << std::endl;

    vector<int> outputB = SolutionB::sortedSquaredArray(inputArray);
    std::cout << "outputB: " + vectorToString(outputB) << std::endl;

    // Assertions
    assert(outputA == outputB);
    assert(outputA == expected);
}
