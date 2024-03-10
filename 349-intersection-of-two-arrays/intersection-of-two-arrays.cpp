class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>myset(nums1.begin(),nums1.end());
        set<int>ans;

        for(int i=0;i<nums2.size();i++)
        {
            if(myset.count(nums2[i]))
            {
                ans.insert(nums2[i]);
            }
        }


        vector<int>ans2(ans.begin(),ans.end());

        return ans2;


        
    }
};