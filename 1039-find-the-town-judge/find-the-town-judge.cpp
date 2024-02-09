class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      
         
         vector<bool>believe(n,false);
         map<int,int>map;

         for(int i=0;i<trust.size();i++)
         {
                believe[trust[i][0]]=true;
                map[trust[i][1]]++;
         }

              int x=-1;
            for(auto it :map)
            {
                 if(it.second>x && believe[it.first]==false && it.second==n-1 )
                 {
                        x=it.first;
                 }
            }

            if(n==1)
            {
                return 1;
            }

        return x;  
    }
};