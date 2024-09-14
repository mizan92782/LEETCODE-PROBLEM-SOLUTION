class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        

        int num=INT_MIN;
        int mxl=0;
        int cl=0;

        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]>num)
             {   
                 
                 num=nums[i];
                 mxl=1;
                 cl=1;
             }else if(nums[i]==num)
             {
                  mxl++;
             }else{
                cl=max(cl,mxl);
                mxl=0;

             }
        }


         cl=max(cl,mxl);


        return cl;
    }
};