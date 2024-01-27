const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        unordered_set<int>s(nums.begin(),nums.end());
        
        

        return s.size()-s.count(0);
    }
};