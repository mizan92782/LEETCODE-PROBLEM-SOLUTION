class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {


       int count=0;
       int minv=INT_MIN;
       int maxv=INT_MAX;
       int zero=0;

       long long sum=0;

       for(int i=0;i<matrix.size();i++)
       {
         for(int j=0;j<matrix[i].size();j++)
         {
             sum=sum+ (long long)((matrix[i][j]<0) ? -1*matrix[i][j] : matrix[i][j]);

             if(matrix[i][j]==0)
             {
                  zero++;
             }

             if(matrix[i][j]<0) count++;

             if(matrix[i][j]>minv && matrix[i][j]<0) minv=matrix[i][j];
             if(matrix[i][j]<maxv && matrix[i][j]>0) maxv=matrix[i][j];

         }
       }

        cout<<sum<<endl;
        cout<<minv<<endl;

        if(zero!= 0) return sum;

       if(count%2==1)
       {
         sum=sum-(min(-1*minv,maxv)*2);
       }

      

       return sum;

    }
}; 