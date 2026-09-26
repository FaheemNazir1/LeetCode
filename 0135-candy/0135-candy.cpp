class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> ans(n,1);
        
        
        //left-->right
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                ans[i] = ans[i-1] + 1;
            }
        }

        //right-->left

        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                ans[i] = max(ans[i],ans[i+1] + 1);
            }
        }
        int candies=0;
        for(int i=0; i<ans.size();i++){
            candies+=ans[i];
           
        }
         return candies;
    }
};