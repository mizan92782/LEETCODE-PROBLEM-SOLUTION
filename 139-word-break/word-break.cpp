class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // Convert wordDict to a set for faster lookups
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        
        // DP table
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;  // Base case: an empty string can always be segmented

        // Fill the DP table
        for (int i = 1; i <= s.size(); i++) {
            for (int j = 0; j < i; j++) {
                // If the substring s[j:i] is in wordSet and dp[j] is true, mark dp[i] as true
                if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;  // No need to check further once dp[i] is true
                }
            }
        }
        
        return dp[s.size()];
    }
};
