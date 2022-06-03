#include <vector>

using namespace std;

// O(n) time | O(1) space - where n is the length of the array
namespace SolutionA
{
    bool isValidSubsequence(vector<int> array, vector<int> sequence)
    {
        int arrIdx = 0;
        int seqIdx = 0;
        while (arrIdx < array.size() && seqIdx < sequence.size())
        {
            if (array[arrIdx] == sequence[seqIdx])
            {
                seqIdx++;
            }
            arrIdx++;
        }
        return seqIdx == sequence.size();
    }
}