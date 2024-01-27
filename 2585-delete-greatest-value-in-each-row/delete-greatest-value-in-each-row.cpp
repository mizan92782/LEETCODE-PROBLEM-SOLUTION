const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
      int n=grid.size();
      int m=grid[0].size();

      for(int i=0;i<n;i++)
      {
          make_heap(grid[i].begin(),grid[i].end());
      }


      int sum=0;
      for(int i=0;i<m;i++)
      {
          int maxi=INT_MIN;
          for(int j=0;j<n;j++)
          {
                 maxi=max(maxi,grid[j].front());
                 pop_heap(grid[j].begin(),grid[j].end()-i);
          }

          sum=sum+maxi;
          cout<<maxi<<endl;

      }



        return sum;
    }
};