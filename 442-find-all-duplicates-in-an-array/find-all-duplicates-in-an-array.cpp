class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>dp(100000,0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
             dp[nums[i]]++;

             if(dp[nums[i]]==2) ans.push_back(nums[i]);
        }


        return ans;
        
    }
};