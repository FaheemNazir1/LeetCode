class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size()-1;

        int smallest = nums[0], largest = nums[n];
        for (int i = smallest; i >= 1; i--) {
            if (smallest % i == 0 && largest % i == 0)
                return i;
        }
        return 1;
    }
};