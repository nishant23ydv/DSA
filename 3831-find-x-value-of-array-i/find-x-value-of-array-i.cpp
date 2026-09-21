class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> ans(k, 0);

        // dp[r] = number of subarrays ending at previous index
        // whose product % k == r
        vector<long long> dp(k, 0);

        for (int x : nums) {

            vector<long long> newDp(k, 0);

            // Start a new subarray [x]
            newDp[x % k]++;

            // Extend previous subarrays
            for (int r = 0; r < k; r++) {

                if (dp[r] == 0)
                    continue;

                int newRemainder = (r * (x % k)) % k;

                newDp[newRemainder] += dp[r];
            }

            // Add current subarrays to answer
            for (int r = 0; r < k; r++) {
                ans[r] += newDp[r];
            }

            // Current becomes previous
            dp = newDp;
        }

        return ans;
    }
};