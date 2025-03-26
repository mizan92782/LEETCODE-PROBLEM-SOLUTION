class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
        int miv=INT_MAX;
        int mxv=INT_MIN;

        vector<int>vec;

        

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                int xv=grid[i][j];

                if(xv<miv) miv=xv;
                if(xv>mxv) mxv=xv;

                vec.push_back(xv);

                
                
            }
        }


     

      int n=vec.size();
       
        //mxv==miv
        if(mxv==miv) return 0;
        
        //if not possible
        int dif=mxv-miv;
        if(dif%x!=0) return -1;

        //eeveno dd case

      


        sort(vec.begin(),vec.end());
        


       
        vector<pair<int,int>>result(n);


        result[0].first=0;

        for(int i=1;i<n;i++)
        {   
            if((vec[i]-vec[i-1])%x!=0) return -1;
            result[i].first=((vec[i]-vec[i-1])/x)*(i)+result[i-1].first;
        }

          
        result[n-1].second=0;
        int a=1;
        for(int i=n-2;i>=0;i--)
        { 
            
            result[i].second=((vec[i+1]-vec[i])/x)*(a)+result[i+1].second;
            a++;
        }

        
        int count=INT_MAX;
        for(int i=0;i<n;i++)
        {
            count=min(count, result[i].second+ result[i].first);
        }
        

    

     return count;

    }
};