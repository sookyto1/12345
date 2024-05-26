#include <vector>
#include <gtest/gtest.h>
using namespace std;

vector<int> VectorPlus(const vector<int>& vec, int n) {
    vector<int> result = vec; 
    for (int& element : result) {
        element += n; 
    }
    return result; 
}

TEST(VectorPlus, HandlesPositiveNumbers) {
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = 3;
    vector<int> expected = { 4, 5, 6, 7, 8 };

    vector<int> result = VectorPlus(vec, n);

    EXPECT_EQ(result, expected);
} 