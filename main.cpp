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

TEST(Solution, makeConnected) {
//    vector<vector<int>> testCase = {{0,1},{0,2},{1,2}};
//    EXPECT_EQ(solution.makeConnected(4, testCase), 1);
//    testCase = {{0,1},{0,2},{0,3},{1,2},{1,3}};
//    EXPECT_EQ(solution.makeConnected(6, testCase), 2);
//    testCase = {{0,1},{0,2},{0,3},{1,2}};
//    EXPECT_EQ(solution.makeConnected(6, testCase), -1);
//    testCase = {{0,1},{0,2},{3,4},{2,3}};
//    EXPECT_EQ(solution.makeConnected(5, testCase), 0);
//    testCase = {{17,51},{33,83},{53,62},{25,34},{35,90},{29,41},{14,53},{40,84},{41,64},{13,68},{44,85},{57,58},{50,74},{20,69},{15,62},{25,88},{4,56},{37,39},{30,62},{69,79},{33,85},{24,83},{35,77},{2,73},{6,28},{46,98},{11,82},{29,72},{67,71},{12,49},{42,56},{56,65},{40,70},{24,64},{29,51},{20,27},{45,88},{58,92},{60,99},{33,46},{19,69},{33,89},{54,82},{16,50},{35,73},{19,45},{19,72},{1,79},{27,80},{22,41},{52,61},{50,85},{27,45},{4,84},{11,96},{0,99},{29,94},{9,19},{66,99},{20,39},{16,85},{12,27},{16,67},{61,80},{67,83},{16,17},{24,27},{16,25},{41,79},{51,95},{46,47},{27,51},{31,44},{0,69},{61,63},{33,95},{17,88},{70,87},{40,42},{21,42},{67,77},{33,65},{3,25},{39,83},{34,40},{15,79},{30,90},{58,95},{45,56},{37,48},{24,91},{31,93},{83,90},{17,86},{61,65},{15,48},{34,56},{12,26},{39,98},{1,48},{21,76},{72,96},{30,69},{46,80},{6,29},{29,81},{22,77},{85,90},{79,83},{6,26},{33,57},{3,65},{63,84},{77,94},{26,90},{64,77},{0,3},{27,97},{66,89},{18,77},{27,43}};
}

TEST(Solution, divCon) {
//    std::vector<std::variant<int, char>> x;
//    x = { 9, 3, '7', '3' };
//    EXPECT_EQ(solution.divCon(x), 2);
//    x = { '5', '0', 9, 3, 2, 1, '9', 6, 7 };
//    EXPECT_EQ(solution.divCon(x), 14);
//    x = { '3', 6, 6, 0, '5', 8, 5, '6', 2,'0' };
//    EXPECT_EQ(solution.divCon(x), 13);
//    x = { '1', '5', '8', 8, 9, 9, 2, '3' };
//    EXPECT_EQ(solution.divCon(x), 11);
//    x = { 8, 0, 0, 8, 5, 7, 2, 3, 7, 8, 6, 7 };
//    EXPECT_EQ(solution.divCon(x), 61);
}

TEST(Solution, humanYearsCatYearsDogYears) {
    std::vector<int> V = {1, 15, 15};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(1), V);
    V = {2, 24, 24};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(2), V);
    V = {10, 56, 64};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(10), V);
}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}