class Solution {
public:

   static bool srt(vector<int> &s,  vector<int> &v) {
        return s.size() > v.size();
    }

    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
     
       vector<vector<int>> graph(n, vector<int>(n, 0)); // Adjacency matrix
        for (const auto& road : roads) {
            int u = road[0];
            int v = road[1];
            graph[u][v] = graph[v][u] = 1; // Mark cities as connected
        }

        int maxConnectedSum = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int connectedSum = 0;
                // Calculate the sum of degrees of the two cities
                connectedSum = count(graph[i].begin(), graph[i].end(), 1) + count(graph[j].begin(), graph[j].end(), 1);
                // Adjust if the cities are directly connected
                if (graph[i][j] == 1) connectedSum--;
                maxConnectedSum = max(maxConnectedSum, connectedSum);
            }
        }

        return maxConnectedSum;


    }
};