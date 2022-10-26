class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(nums[j] == 0 and j > 0) --j;
        while (i < j) {
            while (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                --j;
            }
            ++i;
        }
    }
};
