class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int sum = 0;
        int maxi= 0;
        mp[sum]=-1;
        for (int i = 0; i < n; i++) {
           
            if (nums[i]==1) {
                sum++;
            } else{
                sum--;
            }
            
             if (mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        return maxi;
       
    }
};