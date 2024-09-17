class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        map<string,int>mp1;
        map<string,int>mp2;


        std::istringstream iss1(s1);
        string word1;

        while(iss1 >> word1)
        {
            mp1[word1]++;
        }


        std::istringstream iss2(s2);
        string word2;

        while(iss2 >> word2)
        {
            mp2[word2]++;
        }


        vector<string>ans;

        for(auto it : mp1)
        {
             if(it.second==1 && mp2[it.first]==0)
             {
                ans.push_back(it.first);
             }
        }



         for(auto it : mp2)
        {
             if(it.second==1 && mp1[it.first]==0)
             {
                ans.push_back(it.first);
             }
        }



        return ans;








    
     
    }

};