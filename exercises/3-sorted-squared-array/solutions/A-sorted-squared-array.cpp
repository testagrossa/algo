#include<vector>
#include<algorithm>
using namespace std;


// O(nlogn) Time | O(n) Space - where n is the lenght of the imput array
namespace SolutionA {

    vector<int> sortedSquaredArray(vector<int> array) {
        vector<int> sortedSquares(array.size(), 0);

        for(int idx=0; idx < array.size();idx++) {
        int value = array[idx];
        sortedSquares[idx] == value * value;
            }

        sort(sortedSquares.begin(), sortedSquares.end());
    
        return sortedSquares;
    }
} 
