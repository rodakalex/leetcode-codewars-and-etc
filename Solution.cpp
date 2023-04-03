//
// Created by User on 01.03.2023.
//
#include <iostream>
#include <set>
#include <cmath>
#include <stack>

#include "Solution.h"

std::vector<int> Solution::sortArray(std::vector<int> &nums) {

    bool isSorted = false;
    int index = 0;
    while (!isSorted) {
        isSorted = true;
        if (nums[index] > nums[index + 1]) {
            nums[index] = nums[index + 1] + nums[index];
            nums[index + 1] = nums[index] - nums[index + 1];
            nums[index] = nums[index] - nums[index + 1];
            isSorted = false;
        }
        ++index;
    }

    return nums;
}

int Solution::compress(std::vector<char> &chars) {

    char temp = '\0';
    int count = 0;

    for (char c: chars) {
        if (c == temp) {
            ++count;
        } else if (temp != '\0' and c != temp) {

            count = 0;
        }
        temp = c;
    }
    return count;
}

int Solution::findKthPositive(std::vector<int> &arr, int k) {

    int result = 0, i = 0;
    while (k != 0) {
        if (arr[i] == result) {
            ++i;
            --k;
            continue;
        }
        ++result;
    }

    return result;
}

bool Solution::canPlaceFlowers(std::vector<int> &flowerbed, int n) {
    bool result = false;

    for (int i: flowerbed) {
        if (i == 0) {
            --n;
        }
    }

    return result;
}

double calculateTriangleNumbers(int &n) {

    double result = 0.5 * n * (n + 1);
    return result;

}

long long Solution::zeroFilledSubarray(std::vector<int> &nums) {

    long long result = 0;
    for (int i = 0, temp = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            ++temp;
        }
        if (nums[i] != 0 or i == nums.size() - 1) {
            result += calculateTriangleNumbers(temp);
            temp = 0;
        }
    }

    return result;

}

int Solution::makeConnected(int n, std::vector<std::vector<int>> &connections) {

    int count = 0;
    std::set<int> st;
    for (std::vector<int> c: connections) {
        if (!st.count(c[0]) or !st.count(c[1])) {
            st.insert(c[0]);
            st.insert(c[1]);
        } else {
            ++count;
        }
    }

    if (n - st.size() <= count) {
        return n - st.size();
    } else {
        return -1;
    }
}

// https://www.codewars.com/kata/57eaec5608fed543d6000021/train/cpp
int Solution::divCon(const std::vector<std::variant<int, char>> &x) {
    int result = 0;
    for (std::variant<int, char> v: x) {
        if (v.index() == 0) {
            result += std::get<int>(v);
        } else {
            result -= std::get<char>(v) - 48;
        }
    }
    return result;
}

// https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp
std::vector<int> Solution::humanYearsCatYearsDogYears(int humanYears) {
    std::vector<int> result;

    if (humanYears == 1) {
        result = {1, 15, 15};
    } else if (humanYears == 2) {
        result = {2, 24, 24};
    } else {
        result = {humanYears, (humanYears - 2) * 4 + 24, (humanYears - 2) * 5 + 24};
    }
    return result;
}

// https://www.codewars.com/kata/563cf89eb4747c5fb100001b/train/cpp
std::vector<unsigned int> Solution::removeSmallest(const std::vector<unsigned int> &numbers) {

    if (numbers.empty()) {
        return numbers;
    }

    std::vector<unsigned int> copyNumbers;
    std::pair<unsigned int, unsigned int> deletedElement(0, numbers[0]);

    for (int i = 0; i < numbers.size(); ++i) {
        if (deletedElement.second > numbers[i]) {
            deletedElement.first = i;
            deletedElement.second = numbers[i];
        }
        copyNumbers.push_back(numbers[i]);
    }

    copyNumbers.erase(copyNumbers.begin() + deletedElement.first);

    return copyNumbers;

}

// https://www.codewars.com/kata/586d6cefbcc21eed7a001155/train/cpp
void updateBestLongestRepetition (unsigned int count, char pre, unsigned int &best, char &bestChar);

std::optional<std::pair<char, unsigned int>> Solution::longestRepetition(const std::string &str) {

    if (str.empty()) {
        return std::nullopt;
    }

    unsigned int count = 0, best = 0;
    char pre = '\0', bestChar = '\0';

    for (char c: str) {
        if (c != pre) {
            updateBestLongestRepetition(count, pre, best, bestChar);
            count = 0;
        }
        pre = c;
        ++count;
    }

    updateBestLongestRepetition(count, pre, best, bestChar);

    std::optional<std::pair<char, unsigned int>> result ({bestChar, best});

    return result;

}

void updateBestLongestRepetition(unsigned int count, char pre, unsigned int &best, char &bestChar) {
    if (count > best) {
        best = count;
        bestChar = pre;
    }
}

// https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp
std::map<char, unsigned int> Solution::count(const std::string &string) {

    std::map<char, unsigned int> result;

    for (char c : string) {
        auto it = result.find(c);
        if (it == result.end()) {
            result.insert(std::make_pair(c, 1));
        } else {
            ++it->second;
        }
    }

    return result;

}

// https://www.codewars.com/kata/5f7c38eb54307c002a2b8cc8/train/cpp
std::string Solution::remove_parentheses(const std::string &str) {

    int stop = 0;
    std::string result;

    for (char c : str) {
        if (c == '(') {
            ++stop;
        } else if (c == ')' and stop) {
            --stop;
        } else if (!stop) {
            result += c;
        }
    }

    return result;

}

// https://www.codewars.com/kata/580755730b5a77650500010c/train/cpp
std::string Solution::sortMyString(const std::string &s) {

    std::string result;

    for (int i = 0; i < s.size(); i += 2) {
        result += s[i];
    }

    result += " ";

    for (int i = 1; i < s.size(); i += 2) {
        result += s[i];
    }

    return result;

}


// https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp
std::string Solution::bmi(double w, double h) {

    double bmi = w / h / h;

    if (bmi <= 18.5) {
        return "Underweight";
    } else if (bmi <= 25.0) {
        return "Normal";
    } else if (bmi <= 30.0) {
        return "Overweight";
    } else if (bmi > 30.0) {
        return "Obese";
    }

    return {};
}


// https://www.codewars.com/kata/56f699cd9400f5b7d8000b55/train/cpp
std::array<std::string, 3> Solution::fixTheMeerkat(std::array<std::string, 3> arr) {

    return std::array<std::string, 3> {arr[2], arr[1], arr[0]};

}

// https://www.codewars.com/kata/58d248c7012397a81800005c/train/cpp
bool Solution::is_cube(int volume, int side) {

    if (side > 0 and side * side * side == volume) {
        return true;
    }

    return false;

}

// https://www.codewars.com/kata/6411b91a5e71b915d237332d/train/cpp
bool Solution::validParentheses(const std::string &str) {

    std::stack<char> st;

    for (char c : str) {
        if (c == '(') {
            st.push(c);
        } else if (!st.empty()){
            st.pop();
        } else {
            return false;
        }
    }

    return st.empty();

}
