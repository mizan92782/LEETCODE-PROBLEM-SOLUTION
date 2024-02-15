class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {

        if(nums.size()<3) return -1;

        sort(nums.begin(),nums.end());

        long long ans=-1;
        long long sum=0;

       for(int i=0;i<nums.size();i++)
       {
          
        
          if(i<=1)
          {
              sum=sum+nums[i];
              continue;
          }


          if(sum>nums[i])
          {
              ans=sum+nums[i];
          }

          sum=sum+nums[i];
       

       }



       return ans;
        
    }
};