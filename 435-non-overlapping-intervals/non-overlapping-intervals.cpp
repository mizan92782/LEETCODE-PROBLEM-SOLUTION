class Solution {
public:

    static bool comp(vector<int> a, vector<int> b)
   {
    return a[1]<b[1];
   }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),comp);

      

         int res=0;
       
         
         int pre=intervals[0][1];
        
         for(int i=1;i<intervals.size();i++)
         {
             if(intervals[i][0]<pre)
             {
                res++;
             }else
             {
                pre=intervals[i][1];
             }
         }
       return res;
    }
};