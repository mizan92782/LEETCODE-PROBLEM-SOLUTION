class Solution {
public:
    long long maximumPoints(vector<int>& ee, int ce) {
        
        const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
   }();

        int n=ee.size();
        vector<bool>marked(n,false);

        sort(ee.begin(),ee.end());


        if(ce<ee[0])
        {
            return 0;
        }

        
        long long  p=0;
        

        long long int s=0;
        long long int  e=n-1;

        while(s<=e)
        {
            if(ee[s]<=ce)
            {
               
              
                p=p+(ce/ee[s]);
                ce=ce-ee[s]*( ce/ee[s]);


              
               
            }else{
                 
                

                 ce=ce+ee[e];
                 e--;
                 cout<<"operation : 2: "<<p<<"--> "<<ce<<endl;
            }
        }


        return p;




    }
};