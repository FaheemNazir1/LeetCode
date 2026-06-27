class Solution {
public:

    int maxvalue(vector<int>& v){
        int maxi = INT_MIN;
        for(int i = 0; i < v.size(); i++){
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;
        int right = maxvalue(piles);

        while(left <= right){

            int mid = left + (right - left) / 2;
            long long totalhours = 0;   // FIX: int -> long long

            for(int i = 0; i < piles.size(); i++){
                totalhours += (piles[i] + mid - 1) / mid;
            }

            if(totalhours <= h){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return left;
    }
};