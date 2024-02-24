class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        
        vector<int>ans;
        vector<int>seen;
         int k=0;


        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==-1)
            {   
                k++;

                if(k>seen.size())
                {
                    ans.push_back(-1);
                }else
                {    int m=seen.size();
                     ans.push_back(seen[m-k]);
                }

            }else
            {
                seen.push_back(nums[i]);
                k=0;
            }
        }


        return ans;
    }
};