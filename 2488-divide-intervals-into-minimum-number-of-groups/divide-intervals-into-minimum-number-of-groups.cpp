class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        //store interval
       vector<pair<int,int>>dp;


       for(int i=0;i<intervals.size();i++)
       {
               dp.push_back({intervals[i][0],1});
               dp.push_back({intervals[i][1]+1,-1});
               
       }


       sort(dp.begin(),dp.end());


       int presum=0;
       int mxinterval=0;


       for(int i=0;i<dp.size();i++)
       {
             presum=presum+dp[i].second;
             mxinterval=max(mxinterval,presum);
       }



     return mxinterval; 

        
    }
};