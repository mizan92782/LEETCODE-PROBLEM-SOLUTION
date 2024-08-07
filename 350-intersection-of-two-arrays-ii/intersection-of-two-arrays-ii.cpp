class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int dp[1001]={0};

        for(int i=0;i<nums1.size();i++)
        {
            dp[nums1[i]]++;
        }


        vector<int>ans;
        
        for(int i=0;i<nums2.size();i++)
        {
            if(dp[nums2[i]])
            {
                ans.push_back(nums2[i]);
                dp[nums2[i]]--;
            }
        }


        return ans;
    }
};