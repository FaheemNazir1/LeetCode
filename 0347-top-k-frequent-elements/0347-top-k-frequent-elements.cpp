class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;  // Fix 1
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto p : freq) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--) {  // Fix 2
            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k) return ans;
            }
        }

        return ans;
    }
};