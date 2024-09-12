class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int dp[26]={0};
        
        for(int i=0;i<allowed.length();i++)
        {
             dp[allowed[i]-'a']=1;
        }


        int ans=0;

        for(int i=0;i<words.size();i++)
        {
            bool match=true;
            for(int j=0;j<words[i].size();j++)
            {
                 if(dp[ words[i][j]-'a' ]!=1)
                 {
                     match=false;
                     break;
                 }
            }


            if(match) ans++;
        }



        return ans;
    }
};