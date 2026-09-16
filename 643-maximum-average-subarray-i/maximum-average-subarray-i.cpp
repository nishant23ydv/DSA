class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        int sum = 0;

        for (int j = 0; j < k; j++) {
            sum += nums[j];
        }

        int maxi = sum;

        for (int i = 1; i <= n - k; i++) {
            sum += nums[i + k - 1];
            sum -= nums[i - 1];

            maxi = max(maxi, sum);
        }

        return (double)maxi / k;
    }
};