#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "../../utils/utils.cpp"
#include "./solutions/A-non-constructible-change.cpp"

using namespace std;

int main()
{
    vector<int> input = { 5, 7, 1, 1, 2, 3, 22 };
    int expected = 20;
    int change = SolutionA::nonConstructibleChange(input);
    std::cout << "outputA: " + std::to_string(change) << std::endl;

    // Assertions
    assert(expected == change);
}
