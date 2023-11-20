class Solution {
public:






void DFS(int n,int current,vector<int>& ans)
{
    


     if(current>n)
     {
        return ;
     }

   ans.push_back(current);


// ! sub dfs call for every subtree 0-9 ************
  for(int i=0;i<=9;i++)
  {
    DFS(n,current*10+i,ans);
  }


}


    vector<int> lexicalOrder(int n) {
        ios_base::sync_with_stdio(false), 
     cin.tie(NULL);
       
        vector<int>ans;

        for(int i=1;i<=9;i++)
        {
             DFS(n,i,ans);
        }

      
      return ans;
      
    }
};