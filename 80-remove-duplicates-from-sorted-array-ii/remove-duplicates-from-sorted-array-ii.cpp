class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int pos[10000]={0};
        int neg[10000]={0};

        int ans=0;
        vector<int>x;
        for(int i=0;i<nums.size();i++) 
        {
             if(nums[i]<0)
             {
                  if(neg[abs(nums[i])]<2) 
                  {
                      neg[abs(nums[i])]++;
                      ans++;
                      x.push_back(nums[i]);
                     
                  }
             }else
             {



                  if(pos[nums[i]]<2) 
                  {
                      pos[nums[i]]++;
                      ans++;

                       x.push_back(nums[i]);
                     
                  }
             }
        }






       nums=x;

        return ans;
    }
};