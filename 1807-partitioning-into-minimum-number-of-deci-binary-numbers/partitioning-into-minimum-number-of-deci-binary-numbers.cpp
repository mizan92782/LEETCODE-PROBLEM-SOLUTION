class Solution {
public:
    int minPartitions(string n) {
       
       char m=0;

       for(char c:n)
       {
           if(m<c)  m=c;
       }


        return m-'0';
    }
};