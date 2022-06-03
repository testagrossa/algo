#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

// O(n) Time | O(n) Space - where n is the lenght of the imput array
namespace SolutionB
{
    vector<int> sortedSquaredArray(vector<int> array)
    {
        vector<int> sortedSquares(array.size(), 0);
        int smallerValueIdx = 0;
        int largerValueIdx = array.size() - 1;
        for (int idx = array.size() - 1; idx >= 0; idx--)
        {
            int smallerValue = array[smallerValueIdx];
            int largerValue = array[largerValueIdx];
            if (abs(smallerValue) > abs(largerValue))
            {
                sortedSquares[idx] = smallerValue * smallerValue;
                smallerValueIdx++;
            }
            else
            {
                sortedSquares[idx] = largerValue * largerValue;
                largerValueIdx++;
            }
        }
        return sortedSquares;
    }
}
