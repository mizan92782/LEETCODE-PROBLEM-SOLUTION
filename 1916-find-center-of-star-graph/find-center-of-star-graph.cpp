class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
     set<int>st;
     int x=-1;
     for(int i=0;i<edges.size();i++)
     {
         if(st.count(edges[i][0]))
         {
             x=edges[i][0];
             break;
         }else
         {
             st.insert(edges[i][0]);
         }



         if(st.count(edges[i][1]))
         {
             x=edges[i][1];
             break;
         }else
         {
             st.insert(edges[i][1]);
         }
     }



     return x;

    }
};