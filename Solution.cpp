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
        if (!st.count(c[0]) and !st.count(c[1])) {

        }
    }

    return 0;
}
