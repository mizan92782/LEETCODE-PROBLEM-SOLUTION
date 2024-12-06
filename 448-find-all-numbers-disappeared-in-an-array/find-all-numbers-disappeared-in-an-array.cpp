class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
      set<int>st(nums.begin(),nums.end());
      vector<int>ans;
      for(int i=1;i<=nums.size();i++)
      {
        if(!st.count(i))
        {
            ans.push_back(i);
        }
      }

      return ans;
    }
};