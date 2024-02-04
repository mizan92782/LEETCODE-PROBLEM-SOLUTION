class Solution {
public:
    vector<string> simplifiedFractions(int n) {

        vector<string>ans;
        set<float>st;

        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                 float x=float(j)/float(i);
                 if( j<i && st.count(x)==0)
                 {
                     string s="";
                    s=to_string(j) +"/"+to_string(i);
                     ans.push_back(s);
                     st.insert(x);
                 }
            }
        }


        return ans;
        
    }
};