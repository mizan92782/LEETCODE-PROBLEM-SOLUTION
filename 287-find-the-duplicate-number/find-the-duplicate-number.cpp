const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



 


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int,int>mm;
        int i=0;
        for(i;i<nums.size();i++)
        {
            mm[nums[i]]++;
            if(mm[nums[i]]==2)
            {
              break;
            }
        }



        return nums[i];
    }
};