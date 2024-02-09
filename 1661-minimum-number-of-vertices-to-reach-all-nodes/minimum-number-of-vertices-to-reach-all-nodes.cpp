class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<bool>indegre(n,0);
        for(int i=0;i<edges.size();i++)
        {
             
                 indegre[edges[i][1]]=true;

        }




        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(indegre[i]==false) ans.push_back(i);
        }


        return ans;
    }
};