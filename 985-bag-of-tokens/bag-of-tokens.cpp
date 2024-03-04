class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {



          
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();


        int i=0;
        int j=n-1;

        int score=0;
        int maxs=0;

        while(i<=j)
        {
                if(tokens[i]<=power)
                {
                    score++;
                    maxs=max(maxs,score);
                    power=power-tokens[i];
                    i++;

                   
                }else if(score>0)
                {
                      score--;
                      power=power+tokens[j];
                      j--;
                }else
                {
                    break;
                }

            
        

        }


        return maxs;
    }
};