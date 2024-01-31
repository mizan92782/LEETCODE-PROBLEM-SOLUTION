class Solution {
public:
    string frequencySort(string s) {

        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        multimap<int,char>ml;
        for(auto it:mp)
        {
            ml.insert({it.second,it.first});
        }

        string str="";
        for(auto it=ml.rbegin();it!=ml.rend();it++)
        {
            string c="";
            c.assign(it->first,it->second);
            str=str+c;
        };


        return str;
        
        
    }
};