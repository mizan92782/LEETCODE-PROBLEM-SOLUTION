class Solution {
public:
    vector<int> partitionLabels(string s) {
        int dp[255]={0};

        vector<int>ans;

        for(int i=0;i<s.size();i++)
        {
             dp[s[i]]=i;
        }

        int x=dp[s[0]];
        int count=0;

        for(int i=0;i<s.size();i++)
        {
             if(x==i)
             {

                
                  ans.push_back(count+1);
                  count=0;

                  
                  if(i+1 != s.size()-1)
                  {
                      x=dp[s[i+1]];
                  }else if(i+1 == s.size()-1)
                  {
                      ans.push_back(1);
                  }
                  
                  continue;
             }


             if(dp[s[i]]>x)
             {
                 x=dp[s[i]];
                 
             }

             count++;


             
        }


        return ans;



    }
};