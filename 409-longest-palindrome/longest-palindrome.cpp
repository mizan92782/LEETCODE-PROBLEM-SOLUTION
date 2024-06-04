class Solution {
public:
    int longestPalindrome(string s) {
        
         int dp[128] = {0};
    for(int i = 0; i < s.size(); i++) {
      
        dp[s[i]]++;
    }



    int sum = 0;
   
   
    for(int i = 0; i < 128; i++) {
        sum += dp[i] - (dp[i] % 2); 
       
    }

    if(sum==s.size())
    {
        return sum;
    }

    return sum+1;

    }
};