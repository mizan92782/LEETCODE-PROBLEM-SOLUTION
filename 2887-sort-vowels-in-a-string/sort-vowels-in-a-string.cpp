class Solution {
public:
    string sortVowels(string s) {
        
        int dp[255];
        string str="AEIOUaeiou";
        for(int i=0;i<s.size();i++)
        {
           if(count(str.begin(),str.end(),s[i])) dp[s[i]]=1;
        }

        vector<int>vowel;
        for(int i=0;i<s.size();i++)
        {
              if(dp[s[i]])  vowel.push_back(s[i]);
        }

        sort(vowel.begin(),vowel.end());

        int x=0;

        for(int i=0;i<s.size();i++)
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