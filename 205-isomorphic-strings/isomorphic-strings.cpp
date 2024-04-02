class Solution {
public:
    struct mapping{

        char c;
        int index;

    };

    bool isIsomorphic(string s, string t) {
     
         vector<mapping>first;
         for(int i=0;i<s.size();i++)
         {
            first.push_back({s[i],i});
         }



         vector<mapping>second;
         for(int i=0;i<s.size();i++)
         {
            second.push_back({t[i],i});
         }



         sort(first.begin(),first.end(),[](mapping x,mapping y){
         return x.c==y.c;
         });

         sort(second.begin(),second.end(),[](mapping x,mapping y){
         return x.c==y.c;
         });

        
         vector<int>lfirst(255,-1);
         vector<int>lsecond(255,-1);
        


         for(int i=0;i<first.size();i++)
         { 
           
           
            
            if(first[i].index!=second[i].index  || lfirst[first[i].c]!=lsecond[second[i].c])
            {  
                return false;
            }


            lfirst[first[i].c]=first[i].index;
            lsecond[second[i].c]=second[i].index;


            cout<<endl<<endl;
         }



         return true;
    }
};