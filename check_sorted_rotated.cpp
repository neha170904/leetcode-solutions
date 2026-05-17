#include <vector> 
using namespace std ;
// Problem: Check if Array is Sorted and Rotated
// Difficulty: Easy
// Platform: LeetCode
// Date: 24-02-2026
class Solution {
public:
    bool check(vector<int>nums){
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
           if(nums[i]>nums[(i+1)%n]){
           count++;
           }
        }
        if(count<=1){
        return true;
        }
        else{
        return false;
        }
    }
};