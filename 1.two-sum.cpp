/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++){
            umap.insert({nums[i], i});
        }

        for(int i=0; i<nums.size(); i++){
            auto found = umap.find(target-nums[i]);
            if(found!=umap.end() && i!=found->second){
                res.push_back(i);
                res.push_back(found->second);
                return res;
            }
        }
        return res;
    }
};
// @lc code=end

