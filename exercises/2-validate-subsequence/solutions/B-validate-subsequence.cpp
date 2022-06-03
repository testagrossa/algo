#include <vector>

using namespace std;

// O(n) time | O(1) space - where n is the length of the array
namespace SolutionB {
  bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int seqIndex = 0;
    for (auto value : array) {
      if (seqIndex == sequence.size()) {
        break;
      }
      if (value == sequence[seqIndex]) {
        seqIndex++;
      }
    }
    return seqIndex == sequence.size();
  }
}
