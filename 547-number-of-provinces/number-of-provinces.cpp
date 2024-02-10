class Solution {
public:
    void DFS(vector<vector<int>>& graph,vector<bool>& visited,int i)
    {
         visited[i]=true;
         cout<<"visit : "<<i<<endl;
         for(int v=0;v<graph[i].size();v++)
         {
             if(visited[v]==false && graph[i][v]==1)
             {
                DFS(graph,visited,v);
             }
         }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);


          

        int cmp=0;
        for(int i=0;i<n;i++)
        {
             if(visited[i]==false)
             {
              
                 cmp++;
                 DFS(isConnected,visited,i);
                
             }
        }

        return cmp;
        
    }
};