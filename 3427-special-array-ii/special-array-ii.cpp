class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        

        int n=nums.size();

        vector<int>mem(n,0);

        int count=0;
        for(int i=1;i<n;i++)
        {
             if(nums[i]%2 == nums[i-1]%2)
             {
               count++;
             }

             mem[i]=count;
        }

       

        int m=queries.size();
        vector<bool>ans(m,false);

        for(int i=0;i<queries.size();i++)
        {
                ans[i]= (mem[queries[i][1]]-mem[queries[i][0]])==0;
                
                
        }


        return  ans;
    }
};