class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int t=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        vector<int>ans(n,0);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            ans[i]=abs((sum*2+nums[i])-t);
            sum=sum+nums[i];
          
        }

        return ans;
    }
};