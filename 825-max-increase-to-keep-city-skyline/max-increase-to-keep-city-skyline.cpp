class Solution {
public:


    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<int>rm(n,INT_MIN);
        vector<int>cm(n,INT_MIN);

        for(int i=0;i<n;i++)
        {
             rm[i]=*max_element(grid[i].begin(),grid[i].end());
        }


         for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)
             {
                     cm[i]=max(cm[i],grid[j][i]);
             }
        }

       vector<vector<int>>grid1=grid;
        for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)
             {
                   grid1[i][j]=min(rm[i],cm[j]);
             }
        }


        int count=0;


         for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)
             {
                   count=count+(grid1[i][j]-grid[i][j]);
             }
        }


        return count;
        


    }
};