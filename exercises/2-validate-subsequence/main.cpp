#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "./solutions/A-validate-subsequence.cpp"
#include "./solutions/B-validate-subsequence.cpp"

using namespace std;

int main() {
  vector<int> inputArray = {5, 1, 22, 25, 6, -1, 8, 10};
  vector<int> targetSequence = {1, 6, -1, 10};

  bool outputA = SolutionA::isValidSubsequence(inputArray, targetSequence);
  std::cout << "outputA: " << std::boolalpha << outputA << std::endl;

  bool outputB = SolutionB::isValidSubsequence(inputArray, targetSequence);
  std::cout << "outputB: " << std::boolalpha << outputB << std::endl;

  // Assertions
  assert(outputA == outputB);
}