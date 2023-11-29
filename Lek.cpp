#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <unordered_set>
#include <memory>
#include <numeric>
#include <array>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        auto ispal = [] (std::string &x) {
            std::vector<char> placeholder;
            for(char c:x)
                placeholder.push_back(c);
            return std::equal(placeholder.begin(), placeholder.end(), placeholder.rbegin());
        };
        std::cout << ispal(s);
        return "temp";
    }
};

int main () {


    Solution test;
    
    std::string s {"bababb"};

    std::cout << test.longestPalindrome(s);

    

    return 0;
}