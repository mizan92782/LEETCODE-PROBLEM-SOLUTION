class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        map<int,int >mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) mymap[nums[i]]=1;
        }

        int i=1;
        int ans=0;
        for(auto it:mymap)
        {  
            
            if(it.first!=i)
            {
                break;
            }

            i++;
        }



        return  i;
    

        
    }
};