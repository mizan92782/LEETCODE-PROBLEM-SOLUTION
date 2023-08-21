class Solution {
public:
    int xorOperation(int n, int start) {
         
         ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
         int x=start;

         for(int i=1;i<n;i++)
         {
             x=x^(start+i*2);
         }

         return x;
        
    }
};