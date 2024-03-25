class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      deque<int>que(nums.begin(),nums.end());

      while(k--)
      {
          int x=que.back();
          que.pop_back();
          que.push_front(x);
      }

      nums.clear();
      nums.insert(nums.end(), que.begin(), que.end());
     
        
    }
};