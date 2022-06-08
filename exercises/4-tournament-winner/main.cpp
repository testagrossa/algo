#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "./solutions/A-tournament-winner.h"

using namespace std;

int main()
{
    vector<vector<string>> competitions = { { "HTML", "C#" },
                                            { "C#", "Python" },
                                            { "Python", "HTML" } };
    vector<int> results = { 0, 0, 1 };
    string expected = "Python";
    auto winner = SolutionA::tournamentWinner(competitions, results);
    std::cout << "outputA: " + winner << std::endl;

    // Assertions
    assert(expected == winner);
}
