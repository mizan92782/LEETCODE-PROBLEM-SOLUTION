class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {

        if(nums.size()<3) return -1;

        sort(nums.begin(),nums.end());

        long long ans=-1;
        long long sum=nums[0]+nums[1];

       for(int i=2;i<nums.size();i++)
       {
        
          if(sum>nums[i]) ans=sum+nums[i];
          sum=sum+nums[i];

       }



       return ans;
        
    }
};