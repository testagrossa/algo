#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// O(nolog(n)) time | O(1) space - where n is the number of students
namespace SolutionA
{

    bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights)
    {
        sort(redShirtHeights.begin(), redShirtHeights.end());
        sort(blueShirtHeights.begin(), blueShirtHeights.end());

        string shirtColorInFirstRow =
            redShirtHeights[0] < blueShirtHeights[0] ? "RED" : "BLUE";
        for (int idx = 0; idx < redShirtHeights.size(); idx++)
        {
            int redShirtHeight = redShirtHeights[idx];
            int blueShirtHeight = blueShirtHeights[idx];

            if (shirtColorInFirstRow == "RED")
            {
                if (redShirtHeight >= blueShirtHeight)
                    return false;
            }
            else if (blueShirtHeight >= redShirtHeight)
                return false;
        }
        return true;
    }
}
