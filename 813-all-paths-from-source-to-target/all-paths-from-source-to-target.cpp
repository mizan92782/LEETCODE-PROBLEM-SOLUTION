const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();




class Solution {
public:

    void DFS(vector<vector<int>>& graph, vector<vector<int>>& paths,vector<int>& path,int i)
    {
         path.push_back(i);
       
      
         for(int it:graph[i])
         {   
               
                  DFS(graph,paths,path,it);
             

         }

    

        if(i==graph.size()-1) {
            paths.push_back(path);
         
            
            };

         path.pop_back();
       
         
        


    }


    vector<vector<int>> find_all_paht(vector<vector<int>>& graph)
    {
         vector<int>path;
         vector<vector<int>>paths;
      
             DFS(graph,paths,path,0);
             
         return paths;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

      
        
        return find_all_paht(graph);
    }
};