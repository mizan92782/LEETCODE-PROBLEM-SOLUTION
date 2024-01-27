const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
         make_heap(nums.begin(),nums.end());
         int x=nums.front();
         pop_heap(nums.begin(),nums.end());
        

         int y=nums.front();
         cout<<x<<" "<<y<<endl;

        return  (x-1)*(y-1);
    }
};