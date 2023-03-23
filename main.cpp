#include <iostream>
#include "Solution.h"
#include "gtest/gtest.h"

Solution solution;


void sortArrayTest() {
    vector<int> vector1 = {5, 2, 3, 1};
    vector<int> vector2 = solution.sortArray(vector1);
    for (int x : vector2) {
        cout << x << endl;
    }
}


void compressTest() {

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    vector<char> chars1 = {'a'};
    vector<char> chars2 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << solution.compress(chars) << endl;
    cout << solution.compress(chars1) << endl;
    cout << solution.compress(chars2) << endl;

}

void findKthPositiveTest() {

    vector<int> arr = {2,3,4,7,11};
    vector<int> arr1 = {1,2,3,4};
    cout << solution.findKthPositive(arr, 5) << endl;
    cout << solution.findKthPositive(arr1, 2) << endl;

}

TEST(FactorialTest, HandlesZeroInput) {
    vector<vector<int>> testCase = {{0,1},{0,2},{1,2}};
    EXPECT_EQ(solution.makeConnected(4, testCase), 1);
    testCase = {{0,1},{0,2},{0,3},{1,2},{1,3}};
    EXPECT_EQ(solution.makeConnected(6, testCase), 2);
    testCase = {{0,1},{0,2},{0,3},{1,2}};
    EXPECT_EQ(solution.makeConnected(6, testCase), -1);
}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}
