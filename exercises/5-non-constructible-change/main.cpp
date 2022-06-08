#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "lib/utils.h"
#include "solutions/A-non-constructible-change.h"

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
