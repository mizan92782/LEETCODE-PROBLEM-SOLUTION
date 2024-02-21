class Solution {
public:

int andOperator(int a, int  b) {
      // ShiftCount variables counts till which bit every value will convert to 0
      int shiftcount = 0;
   
      while(a != b and a > 0) {
          shiftcount++;
          a = a >> 1; 
          b = b >> 1;
    }
      return int64_t(a << shiftcount);
}


    int rangeBitwiseAnd(int left, int right) {
        

        return andOperator(left,right);
    }
};