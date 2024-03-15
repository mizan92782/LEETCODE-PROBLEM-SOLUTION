class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int mul=1;
        int n=nums.size();
        int zero=0;
        int index=0;

        for(int i=0;i<n;i++)
        {


            if(nums[i]!=0)
            {
              mul=mul*nums[i];
            } 



            if(nums[i]==0)
            {
                zero++;
                index=i;
            }
        }


        vector<int>ans(n,0);



        if(zero>1)
        {
            return ans;
        }else if (zero==1)
        {
              ans[index]=mul;

              return ans;
        }else
        {
        



        for(int i=0;i<n;i++)
        {
            ans[i]=mul/nums[i];
        }

        }


        return ans;


    }
};