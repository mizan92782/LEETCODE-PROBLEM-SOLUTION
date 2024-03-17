const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {


        intervals.push_back(newInterval);

        sort(intervals.begin(),intervals.end(),[](vector<int> & a,  vector<int>& b){ 
            
          return a[0]<b[0];
        });

        




        vector<vector<int>>ans;

        ans.push_back(intervals[0]);
        int x=intervals[0][1];

        for(int i=1;i<intervals.size();i++)
        {
            
            if(intervals[i][0] >x)
            {
                x=intervals[i][1];
                ans.push_back(intervals[i]);
            }else if(intervals[i][0]<=x && intervals[i][1]>=x)
            {

                x=intervals[i][1];
                int x1=ans.back()[0];
               
                ans.pop_back();

                ans.push_back({x1,x});

            }
        }



        return ans;


        
        
    }
};