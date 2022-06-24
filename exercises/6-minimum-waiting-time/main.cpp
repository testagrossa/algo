#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "solutions/A-minimum-waiting-time.h"

using namespace std;

int main()
{
    vector<int> input = { 3, 2, 1, 2, 6 };
    int expected = 17;
    int waitingTime = SolutionA::minimalWaitingTime(input);
    std::cout << "outputA: " + std::to_string(waitingTime) << std::endl;

    // Assertions
    assert(expected == waitingTime);
}