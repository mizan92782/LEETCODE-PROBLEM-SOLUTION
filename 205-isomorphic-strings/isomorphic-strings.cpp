const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();




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