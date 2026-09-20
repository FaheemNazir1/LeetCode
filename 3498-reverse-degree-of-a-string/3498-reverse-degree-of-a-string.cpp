class Solution {
public:
    int reverseDegree(string s) {
        int length= s.length();
    int total=0;
        for(int i=1;i <=length;i++){
            char current= s[i-1];
            int reverse= 26 -(current -'a');

            total += i*reverse;
        }
        return total;
    }
};