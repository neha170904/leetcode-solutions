// Problem: Move Zeroes
// LeetCode #283
// Difficulty: Easy
// Date: 18-05-2026

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] != 0){

                swap(nums[i], nums[j]);

                j++;
            }
        }
    }
};