const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int>mp;

        for(int i=0;i<mat.size();i++)
        {
            int x=count(mat[i].begin(),mat[i].end(),1);
            mp.insert({x,i});
        }


        vector<int>ans;
        
        int i=0;

        for(auto it:mp)
        {
            i++;
            ans.push_back(it.second);
            if(i==k) break;
        }



        return ans;

    }
};