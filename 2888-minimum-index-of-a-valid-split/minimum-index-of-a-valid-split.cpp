class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        
        unordered_map<int,int>mp;

        int mx_ele=0;
        int mx_count=0;


        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;

            if(mp[nums[i]]>=mx_count)
            {
                mx_count=mp[nums[i]];
                mx_ele=nums[i];
            }
        }

        cout<<mx_ele<<" --> "<<mx_count<<endl;
        
        
        if(mx_count<=(nums.size()/2)) return -1;




        int count=0;
        int start=0;
        int end=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {   
            start++;
            if(nums[i]==mx_ele)
            {
                 count++;

            

                if(count>start/2 && (mx_count-count)>(end-start)/2) return i;

            } 
           

           
           
        }



        return -1;


    }
};