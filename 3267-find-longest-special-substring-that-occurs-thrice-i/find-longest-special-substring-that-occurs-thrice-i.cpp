class Solution {
public:
    int maximumLength(string s) {
        
    unordered_map<string, int> mp;
    int l = 0;

    for (int i = 0; i < s.size(); i++) {
        string str = "";
        char c = s[i];
        int j = i;

        while (j < s.size() && c == s[j]) { // Ensure valid index before comparison
            str += s[j];
            mp[str]++;

            if (mp[str] >= 3 && str.size() > l) {
                l = str.size();
            }

            j++;
        }
    }


    return  (l==0) ? -1 : l; 

    }
};