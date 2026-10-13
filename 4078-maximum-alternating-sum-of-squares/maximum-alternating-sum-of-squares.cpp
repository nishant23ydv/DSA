class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), [](int a, int b) {
            if (abs(a) != abs(b))
                return abs(a) > abs(b);
            return a > b;
        });
        long long ans = 0;
        for (int i=0;i<n;i++){
            if (i < (n + 1) / 2)
                ans += 1LL * nums[i] * nums[i];
            else
                ans -= 1LL * nums[i] * nums[i];
        }
        return ans;
    }
};