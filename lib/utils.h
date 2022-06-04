#include <sstream>  // string stream
#include <vector>

using namespace std;

namespace Utils
{
    template <typename T>
    string vectorToString(vector<T> vector)
    {
        stringstream result;
        for (size_t i = 0; i < vector.size(); ++i)
        {
            if (i != 0)
                result << ",";
            result << vector[i];
        }
        return result.str();
    }
}
