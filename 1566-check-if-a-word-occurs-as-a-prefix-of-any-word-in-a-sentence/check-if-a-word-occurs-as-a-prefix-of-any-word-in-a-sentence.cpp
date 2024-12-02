class Solution {
public:
    int isPrefixOfWord(string sentence, string sd) {


        int idx=1;
       

        string str="";
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {

                 idx++;
                 str="";
            }else
            {
                 str=str+sentence[i];
                 if(str==sd){
                    return idx;
                 }
            }
        }


      return -1;  
    }
};