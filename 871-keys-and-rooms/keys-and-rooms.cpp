class Solution {
public:

   void DFS(vector<vector<int>>& graph,vector<bool>& visited,int i)
   {
        visited[i]=true;
        for(int u:graph[i])
        {
            if(visited[u]==false)
            {
                DFS(graph,visited,u);
            }
        }
   }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n=rooms.size();
        vector<bool>visited(n,false);
        visited[0]=true;
        
         DFS(rooms,visited,0);

        bool f=true;
         for(int i=0;i<n;i++)
         {
            f=f && visited[i];
         }


         return f;
        
    }
};