class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        map<char,int>mymap;

        for(int i=0;i<s.size();i++){
            mymap[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            if (mymap[t[i]]==0){

                return false;
            }else{

               
                 mymap[t[i]]--;
            }
        }
        return true;
    }
};