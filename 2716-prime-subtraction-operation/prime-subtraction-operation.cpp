class Solution {
public:

   
   
    bool primeSubOperation(vector<int>& nums) {
     
     int n=*max_element(nums.begin(),nums.end());
     vector<bool>prime(n+1,true);


    for(int p=2;p*p<=n;p++)
    {
         if(prime[p]==true)
         {
                
               for(int m=p*p;m<=n;m=m+p)
               {
                prime[m]=false;
               }
         }
    }


    vector<int>optimal(n+1,0);
    int p=0;

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true) 
        {
            optimal[i]=p;
            p=i;
        }else
        {
            optimal[i]=p;
        }
    }


    
     
    for(int i=0;i<nums.size();i++)
    {
        int b=0;
        if(i==0)
        {
            b=nums[i];
        }else
        {
            b=nums[i]-nums[i-1];
        }


        if(b<=0)
        {
            return 0;
        }



        cout<<optimal[b]<<endl;


        nums[i]=nums[i]-optimal[b];
    }
     

    return 1;
    }
};