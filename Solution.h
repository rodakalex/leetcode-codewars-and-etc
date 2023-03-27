//
// Created by User on 01.03.2023.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <variant>
#include <vector>

using namespace std;

class Solution {

public:
    vector<int> sortArray(vector<int>& nums);
    int compress(vector<char>& chars);
    int findKthPositive(vector<int>& arr, int k);
    bool canPlaceFlowers(vector<int>& flowerbed, int n);
    long long zeroFilledSubarray(vector<int>& nums);
    int makeConnected(int n, vector<vector<int>>& connections);
    int divCon(const std::vector<std::variant<int, char>>& x);
    std::vector<int> humanYearsCatYearsDogYears(int humanYears);
};


#endif //LEETCODE_SOLUTION_H