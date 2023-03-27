//
// Created by User on 01.03.2023.
//
#include <iostream>
#include <set>

#include "Solution.h"

vector<int> Solution::sortArray(vector<int> &nums) {

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

int Solution::compress(vector<char> &chars) {

    char temp = '\0';
    int count = 0;

    for (char c : chars) {
        if (c == temp) {
            ++count;
        } else if (temp != '\0' and c != temp) {

            count = 0;
        }
        temp = c;
    }
    return count;
}

int Solution::findKthPositive(vector<int> &arr, int k) {

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

bool Solution::canPlaceFlowers(vector<int> &flowerbed, int n) {
    bool result = false;

    for (int i : flowerbed) {
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


long long Solution::zeroFilledSubarray(vector<int> &nums) {

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

int Solution::makeConnected(int n, vector<vector<int>> &connections) {

    int count = 0;
    set<int> st;
    for (vector<int> c : connections) {
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
int Solution::divCon(const vector<std::variant<int, char>> &x) {
    int result = 0;
    for (variant<int, char> v : x) {
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
    vector<int> result;

    if (humanYears == 1) {
        result = {1, 15, 15};
    } else if (humanYears == 2) {
        result = {2, 24, 24};
    } else {
        result = {humanYears, (humanYears - 2) * 4 + 24, (humanYears - 2) * 5 + 24};
    }
    return result;
}
