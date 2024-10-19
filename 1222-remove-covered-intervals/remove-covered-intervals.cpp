class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
       
      
        sort(intervals.begin(),intervals.end());
         
         int count=0;
         for(int i=1;i<intervals.size();i++)
         {
             int a=intervals[i-1][0];
             int b=intervals[i-1][1];
             int c=intervals[i][0];
             int d=intervals[i][1];

             if(a==c && b<=d)
             {
                count++;
             }else if(c>a && d<=b)
             {
                count++;
                {
                    intervals[i]=intervals[i-1];
                }
             }
         }

       return intervals.size()-count;
    }
};