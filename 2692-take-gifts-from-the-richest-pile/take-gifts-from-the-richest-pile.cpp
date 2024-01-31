class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       
       sort(gifts.begin(),gifts.end(),greater<int>());
       int n=gifts.size();

       int i=0;
       while(k--)
       {
           gifts[i]=sqrt(gifts[i]);
            sort(gifts.begin(),gifts.end(),greater<int>());
        
       }


      long long sum=0;
      for(int i=0;i<n;i++)
      {
          sum=sum+gifts[i];
      }


      return sum;

    }

       
};