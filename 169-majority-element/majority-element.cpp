class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>mp;
        for(int v:nums)
        {
            mp[v]++;
        }


        int i=0,max=-1;
        for(auto it:mp)
        {
            if(it.second>max)
            {
                max=it.second;
                i=it.first;
            }
        }


        return i;
    }
};