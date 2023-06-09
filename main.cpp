#include <iostream>
#include "Solution.h"

#include "gtest/gtest.h"


Solution solution;

void sortArrayTest() {

    std::vector<int> vector1 = {5, 2, 3, 1};
    std::vector<int> vector2 = solution.sortArray(vector1);
    for (int x : vector2) {
        std::cout << x << std::endl;
    }

}


void compressTest() {

    std::vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    std::vector<char> chars1 = {'a'};
    std::vector<char> chars2 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    std::cout << solution.compress(chars) << std::endl;
    std::cout << solution.compress(chars1) << std::endl;
    std::cout << solution.compress(chars2) << std::endl;

}


void findKthPositiveTest() {

    std::vector<int> arr = {2,3,4,7,11};
    std::vector<int> arr1 = {1,2,3,4};
    std::cout << solution.findKthPositive(arr, 5) << std::endl;
    std::cout << solution.findKthPositive(arr1, 2) << std::endl;

}


TEST(Solution, makeConnected) {

    std::vector<std::vector<int>> testCase = {{0,1},{0,2},{1,2}};
    EXPECT_EQ(solution.makeConnected(4, testCase), 1);
    testCase = {{0,1},{0,2},{0,3},{1,2},{1,3}};
    EXPECT_EQ(solution.makeConnected(6, testCase), 2);
    testCase = {{0,1},{0,2},{0,3},{1,2}};
    EXPECT_EQ(solution.makeConnected(6, testCase), -1);
    testCase = {{0,1},{0,2},{3,4},{2,3}};
    EXPECT_EQ(solution.makeConnected(5, testCase), 0);
    testCase = {{17,51},{33,83},{53,62},{25,34},{35,90},{29,41},{14,53},{40,84},{41,64},{13,68},{44,85},{57,58},{50,74},{20,69},{15,62},{25,88},{4,56},{37,39},{30,62},{69,79},{33,85},{24,83},{35,77},{2,73},{6,28},{46,98},{11,82},{29,72},{67,71},{12,49},{42,56},{56,65},{40,70},{24,64},{29,51},{20,27},{45,88},{58,92},{60,99},{33,46},{19,69},{33,89},{54,82},{16,50},{35,73},{19,45},{19,72},{1,79},{27,80},{22,41},{52,61},{50,85},{27,45},{4,84},{11,96},{0,99},{29,94},{9,19},{66,99},{20,39},{16,85},{12,27},{16,67},{61,80},{67,83},{16,17},{24,27},{16,25},{41,79},{51,95},{46,47},{27,51},{31,44},{0,69},{61,63},{33,95},{17,88},{70,87},{40,42},{21,42},{67,77},{33,65},{3,25},{39,83},{34,40},{15,79},{30,90},{58,95},{45,56},{37,48},{24,91},{31,93},{83,90},{17,86},{61,65},{15,48},{34,56},{12,26},{39,98},{1,48},{21,76},{72,96},{30,69},{46,80},{6,29},{29,81},{22,77},{85,90},{79,83},{6,26},{33,57},{3,65},{63,84},{77,94},{26,90},{64,77},{0,3},{27,97},{66,89},{18,77},{27,43}};

}


TEST(Solution, divCon) {

    std::vector<std::variant<int, char>> x;
    x = { 9, 3, '7', '3' };
    EXPECT_EQ(solution.divCon(x), 2);
    x = { '5', '0', 9, 3, 2, 1, '9', 6, 7 };
    EXPECT_EQ(solution.divCon(x), 14);
    x = { '3', 6, 6, 0, '5', 8, 5, '6', 2,'0' };
    EXPECT_EQ(solution.divCon(x), 13);
    x = { '1', '5', '8', 8, 9, 9, 2, '3' };
    EXPECT_EQ(solution.divCon(x), 11);
    x = { 8, 0, 0, 8, 5, 7, 2, 3, 7, 8, 6, 7 };
    EXPECT_EQ(solution.divCon(x), 61);

}


TEST(Solution, humanYearsCatYearsDogYears) {

    std::vector<int> V = {1, 15, 15};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(1), V);
    V = {2, 24, 24};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(2), V);
    V = {10, 56, 64};
    EXPECT_EQ(solution.humanYearsCatYearsDogYears(10), V);

}


TEST(Solution, removeSmallest) {

    std::vector<unsigned int> n = { 1, 2, 3, 4, 5 }, x = { 2, 3, 4, 5 };
    EXPECT_EQ(solution.removeSmallest(n), x);
    n = { 5, 3, 2, 1, 4 }, x = { 5, 3, 2, 4 };
    EXPECT_EQ(solution.removeSmallest(n), x);
    n = { 2, 2, 1, 2, 1 }, x = { 2, 2, 2, 1 };
    EXPECT_EQ(solution.removeSmallest(n), x);
    n = {}, x = {};
    EXPECT_EQ(solution.removeSmallest(n), x);

}


TEST(Solution, longestRepetition) {

    std::string s = "aaaabb";
    std::optional<std::pair<char, unsigned int>> a({'a', 4});
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "bbbaaabaaaa";
    a = {'a', 4};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "cbdeuuu900";
    a = {'u', 3};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "abbbbb";
    a = {'b', 5};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "aabb";
    a = {'a', 2};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "";
    EXPECT_EQ(solution.longestRepetition( s ), std::nullopt );
    s = "ba";
    a = {'b', 1};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s = "a";
    a = {'a', 1};
    EXPECT_EQ(solution.longestRepetition( s ), a );
    s =  "aaaaa";
    a = {'a', 5};
    EXPECT_EQ(solution.longestRepetition( s ), a );

}


TEST(Solution, count) {

    std::map<char, unsigned> m = {{ 'a', 2 }, { 'b', 1 }};
    EXPECT_EQ(solution.count("aba"), m);
    m.erase(m.begin(), m.end());
    EXPECT_EQ(solution.count(""), m);

}


TEST(Solution, remove_parentheses) {

    EXPECT_EQ(solution.remove_parentheses("example(unwanted thing)example"), "exampleexample");
    EXPECT_EQ(solution.remove_parentheses("example(unwanted thing)example"), "exampleexample");
    EXPECT_EQ(solution.remove_parentheses("example (unwanted thing) example"), "example  example");
    EXPECT_EQ(solution.remove_parentheses("a (bc d)e"), "a e");
    EXPECT_EQ(solution.remove_parentheses("a(b(c))"), "a");
    EXPECT_EQ(solution.remove_parentheses("hello example (words(more words) here) something"), "hello example  something");
    EXPECT_EQ(solution.remove_parentheses("(first group) (second group) (third group)"), "  ");

}


TEST(Solution, bmi) {

    EXPECT_EQ(solution.bmi(81.585, 2.1), "Underweight");
    EXPECT_EQ(solution.bmi(90.25, 1.9), "Normal");
    EXPECT_EQ(solution.bmi(86.7, 1.7), "Overweight");
    EXPECT_EQ(solution.bmi(200, 1.6), "Obese");

}



TEST(Solution, sortMyString) {

    EXPECT_EQ(solution.sortMyString("CodeWars"), "CdWr oeas");
    EXPECT_EQ(solution.sortMyString("YCOLUE'VREER"), "YOU'RE CLEVER");
}


TEST(Solution, fixTheMeerkat) {

    using a = std::array<std::string, 3>;

    a a1 = {"tail", "body", "head"};
    a a2 = {"head", "body", "tail"};
    EXPECT_EQ(solution.fixTheMeerkat(a1), a2);
    a1 = {"tails", "body", "heads"};
    a2 = {"heads", "body", "tails"};
    EXPECT_EQ(solution.fixTheMeerkat(a1), a2);
    a1 = {"bottom", "middle", "top"};
    a2 = {"top", "middle", "bottom"};
    EXPECT_EQ(solution.fixTheMeerkat(a1), a2);
    a1 = {"lower legs", "torso", "upper legs"};
    a2 = {"upper legs", "torso", "lower legs"};
    EXPECT_EQ(solution.fixTheMeerkat(a1), a2);
    a1 = {"ground", "rainbow", "sky"};
    a2 = {"sky", "rainbow", "ground"};
    EXPECT_EQ(solution.fixTheMeerkat(a1), a2);

}


TEST(Solution, is_cube) {

    EXPECT_EQ(solution.is_cube(1, 1), true);
    EXPECT_EQ(solution.is_cube(8, 2), true);
    EXPECT_EQ(solution.is_cube(7, 2), false);
    EXPECT_EQ(solution.is_cube(0, 0), false);


}

TEST(Solution, validParentheses) {

    EXPECT_EQ(solution.validParentheses("()"), true);
    EXPECT_EQ(solution.validParentheses("((()))"), true);
    EXPECT_EQ(solution.validParentheses("()()()"), true);
    EXPECT_EQ(solution.validParentheses("(()())()"), true);
    EXPECT_EQ(solution.validParentheses("()(())((()))(())()"), true);

    EXPECT_EQ(solution.validParentheses(")("), false);
    EXPECT_EQ(solution.validParentheses("()()("), false);
    EXPECT_EQ(solution.validParentheses("((())"), false);
    EXPECT_EQ(solution.validParentheses("())(()"), false);
    EXPECT_EQ(solution.validParentheses(")()"), false);
    EXPECT_EQ(solution.validParentheses(")()"), false);
    EXPECT_EQ(solution.validParentheses(")"), false);

}


TEST(Solution, sum_even_numbers) {

    std::vector<double> seq;
    seq = { 1, 2.1, 3, 4.6, 5, 6.0, 7, 7.9, 9, 10 };
    EXPECT_EQ(solution.sum_even_numbers(seq), 16);
    seq = { };
    EXPECT_EQ(solution.sum_even_numbers(seq), 0);
    seq = { 1337, 374.0, 849, 23.943, 19, 16.5, 0, 0, 16.0, 32.15 };
    EXPECT_EQ(solution.sum_even_numbers(seq), 390);
    seq = { -16.0, -32.0, 20, 21, 41.0, 42 };
    EXPECT_EQ(solution.sum_even_numbers(seq), 14);
    seq = { -386, 533.695, 798, 753.002, -64, -223.342, -402, -135.645, 218, 740.91, -460, -269.747, 129, 411.14, -417, 105.597, 981, 138.092, 86, 452.435, 983, 502.788, 517, 592.567, 900, 299.157, 382, -193.048, 702, 92.5302, -469, 443.874, 240, 311.666, 846, 231.458, -66, 222.228, 673, 24.2452, 215, 708.5, -51, 983.738, 584, 176.021, -332, 943.071, -116, 417.569, 495, 202.943, 254, 187.724, 216, -249.855, 355, 266.658, 144, -54.1478 };
    EXPECT_EQ(solution.sum_even_numbers(seq), 3544);
}


int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}
