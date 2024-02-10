const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();




class Solution {
public:
    
     struct spt{
         int x;
         int y;
         int w;
     };


    static bool cmp(spt a, spt b)
    {
        return a.w<b.w;
    }


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
        
         return;
     }

     
    
     //make v parent is parent of u;
     // path comparison
     parent[p2]=p1;
   
}



    int minCostConnectPoints(vector<vector<int>>& points) {
         
          int n=points.size();

          vector<spt>arr;
          
          for(int i=0;i<n;i++)
          {
               struct spt e;
              for(int j=i+1;j<n;j++)
              {
                  int v=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                  
                  e.x=i;
                  e.y=j;
                  e.w=v;

                  arr.push_back(e);
              }
          }

          sort(arr.begin(),arr.end(),cmp);
         

          vector<int>parent(n);
          for(int i=0;i<n;i++)
          {
               parent[i]=i;
           }



          int sum=0;
          int e=0;
          for(int i=0;i<arr.size();i++)
          {
               
               if(find_parent(parent,arr[i].x)!=find_parent(parent,arr[i].y))
               {
                    cout<<arr[i].x<<" -> "<<arr[i].y<<"== "<<arr[i].w<<endl;
                    sum=sum+arr[i].w;

                    make_set(parent,arr[i].x,arr[i].y);
                    
                   
                    e++;
               }



               if(e==n-1)
               {
                   break;
               }



          }





          return sum;

    }
};