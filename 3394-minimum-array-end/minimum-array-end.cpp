class Solution {
public:
    long long minEnd(int n, int x) {
        long long k = x;

        for(int i=1;i<n;i++)
        {
            k=(k+1) | x;
        }


        return k;
       
     
    }
};
