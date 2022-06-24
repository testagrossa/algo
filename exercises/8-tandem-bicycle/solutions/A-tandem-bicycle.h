#include <algorithm>
#include <vector>
using namespace std;

// O(log(n)) time | O(1) space - where n is the number of tandem bicycles
namespace SolutionA
{

    void reverseArrayInPlace(vector<int> &array);

    int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
                      bool fastest)
    {
        sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
        sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());

        if (!fastest)
        {
            reverseArrayInPlace(redShirtSpeeds);

            int totalSpeed = 0;
            for (int idx = 0; idx < redShirtSpeeds.size(); idx++)
            {
                int rider1 = redShirtSpeeds[idx];
                int rider2 = blueShirtSpeeds[blueShirtSpeeds.size() - idx - 1];
                totalSpeed += max(rider1, rider2);
            }

            return totalSpeed;
        }
    }
    void reverseArrayInPlace(vector<int> &array)
    {
        int start = 0;
        int end = array.size() - 1;
        while (start < end)
        {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }
}