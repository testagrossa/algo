#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "lib/utils.h"
#include "solutions/A-two-number-sum.h"
#include "solutions/B-two-number-sum.h"
#include "solutions/C-two-number-sum.h"

using namespace std;

int main()
{
    vector<int> inputArray = { 3, 5, -4, 8, 11, 1, -1, 6 };
    int targetSum = 10;

    vector<int> outputA = SolutionA::twoNumberSum(inputArray, targetSum);
    std::cout << "outputA: " + Utils::vectorToString(outputA) << std::endl;

    vector<int> outputB = SolutionB::twoNumberSum(inputArray, targetSum);
    std::cout << "outputB: " + Utils::vectorToString(outputB) << std::endl;

    vector<int> outputC = SolutionC::twoNumberSum(inputArray, targetSum);
    std::cout << "outputC: " + Utils::vectorToString(outputC) << std::endl;

    // Assertions
    assert(outputA == outputB);
    std::reverse(outputC.begin(), outputC.end());
    assert(outputC == outputB);
}
