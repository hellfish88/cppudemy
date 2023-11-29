#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <unordered_set>
#include <memory>
 #include <numeric>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> merged;
        merged.reserve((nums1.size() + nums2.size()));
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        
        double result = std::reduce(merged.begin(), merged.end());

        return result / merged.size();
    }
};

int main () {


    Solution test;
    
    std::vector<int> nums1{1,3};
    std::vector<int> nums2{2,7};

    std::cout << test.findMedianSortedArrays(nums1, nums2);

    

    return 0;
}