class Solution {
public:
    int kthFactor(int n, int k) {
        
     

        int fact=1;
        int last=-1;
        int ans=-1;

        int count=0;

        

        while(fact<=n)
        {
             if(n%fact==0  && fact!=last)
             {
                  last=fact;
                  fact++;

                  count++;
             }else
             {
                 fact++;
             }


             if(count==k)
             {  
                 
                 ans=last;
                 break;
             }
        }



        return ans;
    }
};