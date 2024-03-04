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

                      cout<<i<< " "<<score<<" "<<power<<endl;
                    i++;

                   
                }else if(score>0)
                {
                      score--;
                      power=power+tokens[j];

                       cout<<j<< " "<<score<<" "<<power<<endl;
                      j--;
                }else
                {
                    break;
                }

            
        

        }


        return maxs;
    }
};