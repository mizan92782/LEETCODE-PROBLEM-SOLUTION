class Solution {
public:
    int minimumLength(string s) {
    
      int n=s.size();
      int i=0;
      int j=n-1;

      char c=',';


     
      while(i<j)
      {
         
          if(s[i]==s[j])
          {
             c=s[i];
             i++;
             j--;
            
          }else if(s[i]==c)
          {  
             
              i++;
          }else if(s[j]==c){
              
            
              j--;
          }else{
              break;
          }
          
      }
    
     if(c==s[i] && i==j)
     {
        
         i++;
     }

       

      

   
     return (j-i)+1;;
        
    }
};