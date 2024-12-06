class Solution {
public:
    string addStrings(string num1, string num2) {
        
       ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
       int n=num1.size()-1;
       int m=num2.size()-1;
       string str="";

      int carry=0;
       
       while(n>=0 || m>=0)
       {
           int a=0;
           int b=0;

           if(n>=0)
           {
             a=num1[n]-'0';
             n--;
           }


           if(m>=0)
           {
            b=num2[m]-'0';
            m--;
           }

         
           carry=a+b+carry;
           char c=char(carry%10 +'0');
           carry=carry/10;


           str=c+str;


       }


       if(carry!=0){
         str=char(carry+'0')+str;
       }


       return str;


    }
};