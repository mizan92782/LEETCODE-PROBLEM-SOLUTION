const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<bool>& visited,vector<int>& path,int u)
    {
           visited[u]=true;
           path.push_back(u);

           for( int  v: graph[u])
           {
                if(visited[v]==false)
                {
                    dfs(graph,visited,path,v);
                }
           }


    
    }


    bool cc(vector<vector<int>>& graph,vector<int>path)
    {
         int  x=path.size();

         for(int i=0;i<x;i++)
         {
              if(!(graph[path[i]].size()==x-1))
              {
                  return false;
              }
         }


         return true;
    }


    void addEdge(vector<vector<int>>& graph,vector<int>edge)
    {
      
      graph[edge[0]].push_back(edge[1]);
      graph[edge[1]].push_back(edge[0]);
    }
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
         

          vector<vector<int>>graph(n,vector<int>());
          for(int i=0;i<edges.size();i++)
          {
                addEdge(graph,edges[i]);
          }


         int count=0;

          vector<bool>visited(n,false);
          for( int i=0;i<n;i++)
          {
              if(visited[i]==false)
              {


                   vector<int>path;
                   dfs(graph,visited,path,i);

                   if(cc(graph,path)==true)
                   {
                       count++;
                   }

              }
          }



          return count;
        
    }
};