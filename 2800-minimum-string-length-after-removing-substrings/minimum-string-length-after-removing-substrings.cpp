class Solution {
public:
    int minLength(string s) {

      stack<char>st;
      for(int i=0;i<s.size();i++)
      {
         string x="";
         if(!st.empty()) x=x+st.top()+s[i];

         if(x=="AB"  || x=="CD")
         {
            st.pop();
         }else
         {
            st.push(s[i]);
         }


      } 




      return st.size(); 
    }
};