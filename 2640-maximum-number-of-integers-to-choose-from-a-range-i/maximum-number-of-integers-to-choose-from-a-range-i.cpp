class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        set<int>set(banned.begin(),banned.end());
        
        int  sum=0;
        int count=0;
        
        for(int i=1;i<=n;i++)
        {
            
           if(set.count(i)==0 &&  (sum+i)<=maxSum)
           {
                count++;
               sum=sum+i;
           }
        
        }
        
        
        return count;
       
        
    }
};