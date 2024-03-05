class Solution {
public:
    int minimumLength(string s) {
    
      int n=s.size();
      int i=0;
      int j=n-1;

      char c=',';

     int count=0;

     
      while(i<j)
      {
         
          if(s[i]==s[j])
          {
            
             
              count=count+2;
               cout<<i<<" -> "<<j<<"->>> "<<count<<endl;
               c=s[i];

             i++;
             j--;
            
          }else if(s[i]==c)
          {  
              
               count++;
                cout<<i<<" -> "<<j<< " ->>> "<<count<<endl;
             
              i++;
          }else if(s[j]==c){
              
              count++;
               cout<<i<<" -> "<<j<< " ->>> "<<count<<endl;
              j--;
          }else{
              break;
          }
          
      }
    
     if(c==s[i] && i==j)
     {
         count++;
         i++;
     }

       

      

   
     return (j-i)+1;;
        
    }
};