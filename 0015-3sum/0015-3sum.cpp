class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        
        ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
        set<vector<int>>set;
       sort(arr.begin(),arr.end());
       for(int i=0;i<arr.size()-2;i++)
       {
            int x=-arr[i];
            int l=i+1;
            int r=arr.size()-1;
            int k=0;
            while(l<r)
            {
               
             

                  

                 if(arr[r]+arr[l]==x)
                 {
                     
                     set.insert({arr[i],arr[l],arr[r]});
                     l++;
                     r--;
                    
                 }


                 if(arr[r]+arr[l]>x)  r--;
                 if(arr[r]+arr[l]<x) l++;
                
            }
       }


      
      vector<vector<int>>vec;
      for(auto x:set)
      {
           vec.push_back(x);
      }


       return vec;
    }
};