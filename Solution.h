//
// Created by User on 01.03.2023.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <variant>
#include <vector>
#include <optional>
#include <map>

class Solution {

public:
    std::vector<int> sortArray(std::vector<int>& nums);
    int compress(std::vector<char>& chars);
    int findKthPositive(std::vector<int>& arr, int k);
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n);
    long long zeroFilledSubarray(std::vector<int>& nums);
    int makeConnected(int n, std::vector<std::vector<int>>& connections);
    int divCon(const std::vector<std::variant<int, char>>& x);
    std::vector<int> humanYearsCatYearsDogYears(int humanYears);
    std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers);
    std::optional<std::pair<char, unsigned int>> longestRepetition(const std::string &str);
    std::map<char, unsigned> count(const std::string& string);
    std::string remove_parentheses(const std::string &str);

};


#endif //LEETCODE_SOLUTION_H
