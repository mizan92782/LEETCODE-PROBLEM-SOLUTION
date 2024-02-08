class Solution {
public:

int find_parent(vector<int>& parent,int u)
{
     if(parent[u]==u)
     {
        return u;
     }

     
     return parent[u]=find_parent(parent,parent[u]);
}




void make_set(vector<int>& parent,int u,int v)
{

    // find parent
     int p1=find_parent(parent,u);
     int p2=find_parent(parent,v);

     // check is have same parent
     if(p1==p2)
     {
         cout<<" u --> v : are in one set/same parent \n";
         return;
     }

     
    
     //make v parent is parent of u;
     // path comparison
     parent[p2]=p1;
   
}



    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }


        for(int i=0;i<edges.size();i++)
        {
            make_set(parent,edges[i][0],edges[i][1]);
        }



        return find_parent(parent,source)==find_parent(parent,destination);


    }
};