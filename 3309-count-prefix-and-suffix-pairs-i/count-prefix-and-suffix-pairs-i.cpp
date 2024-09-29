class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
       
        int count=0;

        for(int i=0;i<words.size();i++)
        {
              for(int j=i+1;j<words.size();j++)
              {
                  int s=words[i].size();
                  int ss=words[j].size();


                 if ((s <= ss && words[j].substr(0, s) == words[i] && words[j].substr(ss - s) == words[i])) 
                 {
                       count++;
                 }

              }
        }


        return count;
    }
};