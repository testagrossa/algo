#include <algorithm>
#include <vector>

using namespace std;

// O(nlog(n)) time | O(1) space
namespace SolutionC
{
    vector<int> twoNumberSum(vector<int> array, int targetSum)
    {
        sort(array.begin(), array.end());
        int left = 0;
        int right = array.size() - 1;
        while (left < right)
        {
            int currentSum = array[left] + array[right];
            if (currentSum == targetSum)
            {
                return { array[left], array[right] };
            }
            else if (currentSum < targetSum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
}
