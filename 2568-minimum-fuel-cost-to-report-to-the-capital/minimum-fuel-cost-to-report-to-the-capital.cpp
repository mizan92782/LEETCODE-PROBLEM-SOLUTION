class Solution {
public:
   
    long long fuel=0;

    int  DFS(vector<vector<int>>& graph,vector<bool>& visited,int u,int seats)
    {    
              visited[u]=true;  

              int count=1;

              for(int v:graph[u]) 
              {
                  if(visited[v]==false)
                  {
                       count=count+DFS(graph,visited,v,seats);
                  }
              }
 
              long long x=(count/seats);

              if(!(count%seats==0))
              {
                x++;
              }

              fuel=fuel+x;

              cout<<"from city: "<<u<<"  fuel needed : "<<x<<"  ::: node : "<<count<<endl;
            

            return count;
          
    }


    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        
        int n=roads.size()+1;
        vector<vector<int>>graph(n,vector<int>());
        for(int i=0;i<roads.size();i++)
        {
             graph[roads[i][0]].push_back(roads[i][1]);
             graph[roads[i][1]].push_back(roads[i][0]);
        }
        
         vector<bool>visited(n,false);

         visited[0]=true;

         for(int v:graph[0])
         {
             if(visited[v]==false)
             {     
                
                   DFS(graph,visited,v,seats);
             }
         }
            

    


        return fuel;
        
    }
};