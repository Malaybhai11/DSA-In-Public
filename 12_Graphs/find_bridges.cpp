#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> findBridges(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& e : edges) { adj[e[0]].push_back(e[1]); adj[e[1]].push_back(e[0]); }
        vector<int> tin(n, -1), low(n, -1);
        vector<bool> visited(n, false);
        vector<vector<int>> bridges;
        int timer = 0;
        
        function<void(int, int)> dfs = [&](int v, int p) {
            visited[v] = true;
            tin[v] = low[v] = timer++;
            for (int to : adj[v]) {
                if (to == p) continue;
                if (visited[to]) low[v] = min(low[v], tin[to]);
                else {
                    dfs(to, v);
                    low[v] = min(low[v], low[to]);
                    if (low[to] > tin[v]) bridges.push_back({v, to});
                }
            }
        };
        
        for (int i = 0; i < n; i++) if (!visited[i]) dfs(i, -1);
        return bridges;
    }
};
