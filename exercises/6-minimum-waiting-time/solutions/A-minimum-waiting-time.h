#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// O(nlogn) time | O(1) space - where n is the number of queries
namespace SolutionA
{

    int minimalWaitingTime(vector<int> queries)
    {
        sort(queries.begin(), queries.end());

        int totalWaitingTime = 0;
        for (int idx = 0; idx < queries.size(); idx++)
        {
            int duration = queries[idx];
            int queriesLeft = queries.size() - (idx + 1);
            totalWaitingTime += duration * queriesLeft;
        }
        return totalWaitingTime;
    }
}