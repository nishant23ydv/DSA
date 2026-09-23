class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells,
                                 vector<int>& potions,
                                 long long success) {

        int n = spells.size();
        int m = potions.size();

        sort(potions.begin(), potions.end());

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            long long val =
                (success + spells[i] - 1) / spells[i];

            int l = 0;
            int r = m - 1;

            while (l <= r) {

                int mid = l + (r - l) / 2;

                if (potions[mid] >= val) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            ans.push_back(m - l);
        }

        return ans;
    }
};