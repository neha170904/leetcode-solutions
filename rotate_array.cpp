#include <vector> 
#include <algorithm>
using namespace std;
// Problem: Rotate Array
// LeetCode: #189
// Difficulty: Medium
// Approach: Array Reversal
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};