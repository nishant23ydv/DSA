class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n =grid.size();
        vector<vector<int>>cols;
        for (int i=0;i<n;i++){
        vector<int> temp;
            for (int j=0;j<n;j++){
                 temp.push_back(grid[j][i]);
            }
            cols.push_back(temp);
        }
        int cnt=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (grid[i]==cols[j]) cnt++;
            }
        }
        return cnt;


      
    }
};