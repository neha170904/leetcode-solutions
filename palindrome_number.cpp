// Problem: Palindrome Number
// LeetCode #9
// Difficulty: Easy
// Date: 18-05-2026

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){
            return false;
        }

        int temp = x;
        long long rev = 0;

        while(temp > 0){

            int digit = temp % 10;

            rev = rev * 10 + digit;

            temp = temp / 10;
        }

        return x == rev;
    }
};