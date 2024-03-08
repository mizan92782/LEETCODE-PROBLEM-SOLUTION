class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        
        map<int,int>mp;
       
        int mx=0;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            mx=max(mx,mp[nums[i]]);
           
        }
        
        
        int sum=0;
        for(auto it :mp)
        {
           if(it.second==mx) sum=sum+it.second;
        }
        
        
        return sum;
    }
};