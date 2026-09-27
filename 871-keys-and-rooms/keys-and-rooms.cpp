class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n, -1);
        dfs(0, rooms, vis);

        if (find(vis.begin(), vis.end(), -1) != vis.end()) return false;
        return true;
    }

    void dfs(int room, vector<vector<int>>& rooms, vector<int>& vis) {

        vis[room] = 1;
        for (auto key : rooms[room]) {
            if (vis[key] == -1) {
                dfs(key, rooms, vis);
            }
        }
    }
};