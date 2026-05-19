// Problem: Single Number
// LeetCode #136
// Difficulty: Easy
// Date: 19-05-2026

#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int i = 0; i < nums.size(); i++){

            ans = ans ^ nums[i];
        }

        return ans;
    }
};