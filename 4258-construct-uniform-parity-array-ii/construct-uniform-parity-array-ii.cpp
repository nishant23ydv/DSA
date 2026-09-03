class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int mn = nums1[0];

        for (int i = 1; i < n; i++) {
            mn = min(mn, nums1[i]);
        }

        if (mn % 2 == 0) {
            for (int i = 0; i < n; i++) {
                if (nums1[i] % 2 == 1)
                    return false;
            }
        }

        return true;
    }
};