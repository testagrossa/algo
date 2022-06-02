#include <sstream> // string stream 
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
static string vectorToString(vector<T> vector)
{
    stringstream result;
    for(size_t i = 0; i < vector.size(); ++i)
    {
    if(i != 0)
        result << ",";
    result << vector[i];
    }
    return result.str();
}