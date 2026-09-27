class Solution {
public:
    void solve(int node, vector<vector<pair<int,int>>>& adj, vector<int>& vis, int& ans){
        vis[node] = 1;
        for (auto [next, dir] : adj[node]){
            if(vis[next]) continue;
            if (dir == 1) ans++;

            solve(next, adj, vis, ans);
        }


    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);

        for (auto edge : connections) {

            int u = edge[0];
            int v = edge[1];

            adj[u].push_back({v, 1});

            adj[v].push_back({u, 0});
        }
        vector<int> vis(n, 0);
        int ans = 0;
        solve(0, adj, vis, ans);
        return ans;

    }
};