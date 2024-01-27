const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());

        if(nums[n-1]<=0)
        {
            return (nums[0]-1) * (nums[1]-1);
        }

        return  (nums[n-1]-1)*(nums[n-2]-1);
    }
};