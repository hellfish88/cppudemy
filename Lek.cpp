#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool isMatch(std::string s, std::string p) {
     return true;
    };
};


int main () {

    std::string test {"fisk"};
    Solution test2;

    test2.isMatch(test, "hejsan");


    std::vector<int> nums {1,2,3,4,5};
    std::vector<int> adds {6,7,8,9};
    
    auto it = std::find(nums.begin(), nums.end(), 5);

    std::back_inserter()

    std::cout << *it << std::endl;

    return 0;
}