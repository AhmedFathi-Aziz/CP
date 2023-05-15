class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last = 0;
        int n = nums.size();
        for (auto i = 0; i < n; i++) {
            if (nums[i])
                nums[last++] = nums[i];
        }
        for (; last < n; last++)
            nums[last] = 0;
        for (auto &i : nums)
            cout << i << ' ';
    }
};
