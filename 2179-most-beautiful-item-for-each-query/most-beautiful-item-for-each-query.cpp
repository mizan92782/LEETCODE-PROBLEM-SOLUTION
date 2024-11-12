class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        for(int i=0;i<queries.size();i++)
        {
            items.push_back({queries[i],0});
        }


      sort(items.begin(), items.end(), [](const vector<int>& x, const vector<int>& y) {
    return x[0] < y[0];
});


       
       
      
       unordered_map<int,int>mp;
       int mx=0;
       for(int i=0;i<items.size();i++)
       {
           mx=max(mx,items[i][1]);
           mp[items[i][0]]=mx;
          
       }

      

       vector<int>ans;
       for(int i=0;i<queries.size();i++)
       {
          ans.push_back(mp[queries[i]]);
       }

       return ans;;

    }
};