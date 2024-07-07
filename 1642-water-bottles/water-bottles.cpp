class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int d=numBottles;
        int e=numBottles;
        int rem=0;

        while(e>=numExchange)
        {
             
            int get=e/numExchange;
            d=d+get;

            e=(e-(get)*numExchange)+get;

            

        } 

        return d;
    }
};