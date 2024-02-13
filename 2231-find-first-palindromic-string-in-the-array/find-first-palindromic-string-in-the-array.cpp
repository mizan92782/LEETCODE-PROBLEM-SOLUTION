class Solution {
public:
    
    bool pal(string str)
    {
         string s=str;
         reverse(s.begin(),s.end());
         return s==str;
    }
    string firstPalindrome(vector<string>& words) {
        
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            if(pal(words[i])==true)
            {
                      ans=words[i];
                      break;
            }
        }


        return ans;
    }
};