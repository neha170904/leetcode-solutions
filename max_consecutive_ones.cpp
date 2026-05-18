// Problem: Max Consecutive Ones
// LeetCode #485
// Difficulty: Easy
// Date: 18-05-2026

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == 1){

                count++;

                maxi = max(maxi, count);
            }

            else{
                count = 0;
            }
        }

        return maxi;
    }
};