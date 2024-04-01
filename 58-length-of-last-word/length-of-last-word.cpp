class Solution {
public:
    int lengthOfLastWord(string s) {
        
        bool find=false;
        int count=0;

        for(int i=s.size()-1;i>=0;i--)
        {
             if(isspace(s[i]) && find==false)
             {
                continue;
             }


             if(isspace(s[i]) && find==true)
             {
                 break;
             }
             
             count++;
             find=true;


             
        



        }




        return count;

    }
};