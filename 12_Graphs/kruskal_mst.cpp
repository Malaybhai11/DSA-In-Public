#include <vector>
#include <algorithm>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        if (rank[px] < rank[py]) swap(px, py);
        parent[py] = px;
        if (rank[px] == rank[py]) rank[px]++;
        return true;
    }
};

class Solution {
public:
    int mstWeight(int n, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end(), [](auto& a, auto& b) { return a[2] < b[2]; });
        DSU dsu(n);
        int totalWeight = 0, count = 0;
        for (auto& e : edges) {
            if (dsu.unite(e[0], e[1])) {
                totalWeight += e[2];
                if (++count == n - 1) break;
            }
        }
        return totalWeight;
    }
};
