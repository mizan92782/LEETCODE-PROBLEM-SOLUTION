class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int oper=0;
        int n=nums.size();
        int mid=nums[n/2];

        for(int x:nums)
        {
            oper=oper+abs(x-mid);
        }

        return oper;
    }
};