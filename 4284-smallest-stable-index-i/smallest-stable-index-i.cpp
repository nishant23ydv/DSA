class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int> suff(n);

        suff[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suff[i] = min(nums[i], suff[i + 1]);
        }

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            mini = suff[i];

            if (maxi - mini <= k) {
                return i;
            }
        }

        return -1;
    }
};