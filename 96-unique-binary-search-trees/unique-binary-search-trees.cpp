class Solution {
public:

int  CatalanNumber(int n)
{
      if(n<=1) return 1;
      
      //! for formula


      int result=0;

      for(int i=0;i<n;i++)
      {
            result+=CatalanNumber(i) * CatalanNumber(n-i-1);
           
            
      }


      return result;
}


    int numTrees(int n) {

        return CatalanNumber(n);

        
    }
};