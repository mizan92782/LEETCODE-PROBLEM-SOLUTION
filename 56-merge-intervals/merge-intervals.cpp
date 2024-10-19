class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);


        for (int i=1;i<intervals.size();i++)
        {
            if(ans.back()[1]>=intervals[i][0])
            {   
                int f=ans.back()[0];
                int l=ans.back()[1];
                ans.pop_back();
                
                ans.push_back({min(f,intervals[i][0]),max(l,intervals[i][1])});
            }else
            {
                ans.push_back(intervals[i]);
            }
        }


        return ans;
    }
};