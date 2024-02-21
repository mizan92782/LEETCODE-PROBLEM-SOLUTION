class Solution {
public:
    string sortVowels(string s) {
        
        int dp[255];
        dp['A']=1;
        dp['E']=1;
        dp['I']=1;
        dp['O']=1;
        dp['U']=1;
        dp['a']=1;
        dp['e']=1;
        dp['i']=1;
        dp['o']=1;
        dp['u']=1;

        int n=s.size();
        
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