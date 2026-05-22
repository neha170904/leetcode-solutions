// Problem: Remove Outermost Parentheses
// LeetCode #1021
// Difficulty: Easy
// Approach: Depth Counting
// Date: 20-05-2026

#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";

        int count = 0;

        for(int i = 0; i < s.length(); i++){

            if(s[i] == '('){

                count++;

                if(count > 1){
                    ans += s[i];
                }
            }

            else{

                if(count > 1){
                    ans += s[i];
                }

                count--;
            }
        }

        return ans;
    }
};