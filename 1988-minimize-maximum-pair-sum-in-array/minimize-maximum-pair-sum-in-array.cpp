
const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int minPairSum(vector<int>& nums) {

      int n=nums.size();
      sort(nums.begin(),nums.end()) ;

      int s=0;
      int e=n-1;

      int ans=0;

      while(s<e)
      {
           cout<<nums[s]+nums[e]<<endl;
           ans=max(ans,(nums[s]+nums[e]));
           s++;
           e--;
      }



      return ans;
    }
};