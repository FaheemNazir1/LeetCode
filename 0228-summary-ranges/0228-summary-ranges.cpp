class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i = 0;
        int n = nums.size();
         while(i<n){
            //store first number
            int start = nums[i];

            //find consecutive
            while(i + 1 < n && nums[i]+1==nums[i+1]) i++;

            //interger to string

            string s = to_string(start);

            if(start != nums[i]){
                s += "->" + to_string(nums[i]);
            }
            ans.push_back(s);
        i++;

         }
        return ans;
        
    }
};