#include <algorithm>
#include <vector>
using namespace std;

// O(nlogn) time | O(1) space - where n is the number of coins
namespace SolutionA
{

    int nonConstructibleChange(vector<int> coins)
    {
        sort(coins.begin(), coins.end());

        int currentChangeCreated = 0;
        for (int coin : coins)
        {
            if (coin > currentChangeCreated + 1)
                return currentChangeCreated + 1;

            currentChangeCreated += coin;
        }
        return currentChangeCreated + 1;
    }
}