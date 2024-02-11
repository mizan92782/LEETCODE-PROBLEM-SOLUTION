class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {   
            int x=1;
            int s=0;
            for(int j=i;j<arr.size();j++)
            {
                 s=s+arr[j];
                 if(x%2==1)
                 {
                     sum=sum+s;
                     
                 }
                 x++;
            }
        }


        return sum;
    }
};