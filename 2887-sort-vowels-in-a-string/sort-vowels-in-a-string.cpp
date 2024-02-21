class Solution {
public:
    string sortVowels(string s) {
        
        int dp[255];
        int n=s.size();
        string str="AEIOUaeiou";
        for(int i=0;i<n;i++)
        {
           if(count(str.begin(),str.end(),s[i])) dp[s[i]]=1;
        }

        vector<int>vowel;
        for(int i=0;i<n;i++)
        {
              if(dp[s[i]])  vowel.push_back(s[i]);
        }

        sort(vowel.begin(),vowel.end());

        int x=0;

        for(int i=0;i<n;i++)
        {
             if(dp[s[i]])
             {
                 s[i]=vowel[x];
                 x++;
             }
        }


        return s;


        
    }
};