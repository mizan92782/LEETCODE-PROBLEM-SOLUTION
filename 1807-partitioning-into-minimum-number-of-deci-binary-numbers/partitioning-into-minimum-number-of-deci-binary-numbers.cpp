class Solution {
public:
    int minPartitions(string n) {
        
        int m=0;
        for(int i=0;i<n.size();i++)
        {
              m=max(m,n[i]-'0');
        }

        return m;
        
    }
};