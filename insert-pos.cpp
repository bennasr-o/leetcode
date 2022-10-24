class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1, mid;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] < target) {
                lo = mid + 1;
            }
            if (nums[mid] > target) {
                hi = mid - 1;
            }
            if (nums[mid] == target) {
                break;
            }
        }
        return max(lo, mid);
    }
};
