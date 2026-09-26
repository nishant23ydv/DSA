class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return 0;

        int l = 0, r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (mid == 0 && nums[mid] > nums[mid + 1])
                return mid;

            if (mid == n - 1 && nums[mid] > nums[mid - 1])
                return mid;

            if (nums[mid] > nums[mid + 1] &&
                nums[mid] > nums[mid - 1]) {
                return mid;
            }
            else if (nums[mid] > nums[mid + 1]) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }

        return -1;
    }
};