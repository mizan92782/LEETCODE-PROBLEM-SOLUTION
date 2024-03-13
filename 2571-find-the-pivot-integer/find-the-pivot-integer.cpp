class Solution {
public:
    int pivotInteger(int n) {

        int sum= (n*(n+1))/2;
       
        int count=0;
        for(int i=1;i<=n;i++)
        {
           count=count+i;
           if(count==sum) return i;
           sum=sum-i;
        }


        return -1;
        
    }
};