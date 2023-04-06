/*
 * @lc app=leetcode id=2027 lang=cpp
 *
 * [2027] Minimum Moves to Convert String
 */

// @lc code=start
class Solution {
public:
    int minimumMoves(string s) {
        int res = 0, i=0;
        while(i<s.length()){
            if(s[i]=='O'){
                i++;
            }
            else{
                res++;
                i+=3; 
            }
        }
        return res;
    }
};
// @lc code=end