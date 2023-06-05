/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> set;
        int right=0, left=0, res=0;

        while(right<s.size()){
            if(set.find(s[right])!=set.end()){
                set.erase(s[left]);
                left++;
            }
            else{
                res=max(res, right-left+1);
                set.insert(s[right]);
                right++;
            }
        }
        return res;
    }
};
// @lc code=end

