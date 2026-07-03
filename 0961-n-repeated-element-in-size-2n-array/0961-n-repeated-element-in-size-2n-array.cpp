class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ans;

        for (int i = 0; i < n; i++) {
            ans[nums[i]]++;

            if (ans[nums[i]] > 1) {
                return nums[i];
            }
        }

        return -1;
    }
};