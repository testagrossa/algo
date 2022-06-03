#include <unordered_set>
#include <vector>

using namespace std;

// O(n) time | O(n) space
namespace SolutionB {
  vector<int> twoNumberSum(vector<int> array, int targetSum) {
    unordered_set<int> nums;
    for (int num : array) {
      int potentialMatch = targetSum - num;
      if (nums.find(potentialMatch) != nums.end()) {
        return vector<int>{potentialMatch, num};
      } else {
        nums.insert(num);
      }
    }
    return {};
  }
}
