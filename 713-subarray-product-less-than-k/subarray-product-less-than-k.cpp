class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            int pro=1;
            for(int j=i;j<nums.size();j++)
            {
                 pro=pro*nums[j];

                 if(pro<k)
                 {
                    count++;
                 }else
                 {
                    break;
                 }
            }
        }







        return count;
        
    }
};