class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>ans(256,0);
        int x=-1;

        for(int i=s.size()-1;i>=0;i--)
        {
           
                ans[s[i]]++;
        }


         for(int i=0;i<s.size();i++)
        {
            if(ans[s[i]]==1)
            {
                 x=i;
                 break;
            }
        }





        return x;
    }
};