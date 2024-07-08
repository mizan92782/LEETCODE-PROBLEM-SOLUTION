class Solution {
public:
    int findTheWinner(int n, int k) {
        
        if(n==1) return 1;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }

        int count=0;
        int cf=0;
        int ans=1;

        vector<int>loss(n+1,true);


       int i=0;
    while (1)
    {

        if (arr[i] != -1)
        {

            cf++;

            if (cf == k)
            {

                count++;
                cf = 0;
                loss[arr[i]]=false;
               
                arr[i] = -1;
            }


            if(count==n-1) break;
        }

        i++;
        i = i % n;
    }


     
    for(int i=1;i<=n;i++)
    {
        if(loss[i]==true)
        {
           ans=i;
           break;
        }
    }


  return ans;


    
    }
    
};