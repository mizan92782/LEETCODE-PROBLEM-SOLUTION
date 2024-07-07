class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        

        int mx=numBottles;
        int eb=numBottles;

        int db=0;

        while(eb>=numExchange)
        {
            //  mx++;
            //  eb=eb-numExchange;
            //  numExchange++;

            
            mx++;
            eb= eb-numExchange;

            numExchange++;
            eb++;

             
        }


        return mx;
    }
};