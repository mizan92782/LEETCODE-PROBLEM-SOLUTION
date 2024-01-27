class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int index=INT_MIN;
        int j=-1;

        vector<vector<int>>ans(nums.size(),vector<int>());
     
        
      
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]!=index)
             {
                  j=0;
                  index=nums[i];
             }
             
            ans[j].push_back(nums[i]);
            j++;
            
             
        }


        vector<vector<int>>Ans;

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i].size()!=0)
            {
                Ans.push_back(ans[i]);
            }
        }


        return Ans;
        
    }
};