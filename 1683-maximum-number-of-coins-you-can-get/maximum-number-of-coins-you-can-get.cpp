class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
       
        int n=piles.size();
        int s=-1;
        int e=n-1;

        int count=0;

        while(s<e)
        {
            
            s=s+2;
            e--;

            count=count+piles[s];

        }


        return count;
    }
};