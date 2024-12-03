class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int t = 0;
        string str = "";

        for (int i = 0; i < s.size(); i++) {   
            // Ensure t is within bounds of the spaces vector
            if (t < spaces.size() && spaces[t] == i) {
                str += " ";
                t++;
            }
            str += s[i];
        }

        return str;
       
    }
};