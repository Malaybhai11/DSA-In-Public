#include <vector>
#include <queue>
#include <limits>
using namespace std;

class Solution {
public:
    vector<int> shortestPath(int n, vector<vector<pair<int, int>>>& adj, int src) {
        vector<int> dist(n, numeric_limits<int>::max());
        dist[src] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, src});
        
        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;
            for (auto [v, w] : adj[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }
};
