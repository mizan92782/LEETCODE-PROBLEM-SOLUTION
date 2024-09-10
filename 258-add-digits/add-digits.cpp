class Solution {
public:
    int addDigits(int num) {
        
        if(num<=9) return num;

        int cnum=0;
        while(num!=0)
        {   
             
             cnum=cnum+num%10;
             num=num/10;


            
            if(num==0 && cnum>9)
             {
               
                  num=cnum;
                  cnum=0;
             }




             if(num==0 && cnum<=9)
             {
                break;
             }


        }



        return cnum;
    }
};