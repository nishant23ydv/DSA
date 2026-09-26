class Solution {
public:
    const long long MOD = 1e9 + 7;
    vector<long long> dp;

    long long solve(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (dp[n] != -1)
            return dp[n];
            
        dp[n] = (2 * solve(n - 1) + solve(n - 3)) % MOD;

        return dp[n];
    }

    int numTilings(int n) {

        dp.resize(n + 1, -1);

        return solve(n);
    }
};