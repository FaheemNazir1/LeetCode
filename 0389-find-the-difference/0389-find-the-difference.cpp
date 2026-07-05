class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> ans;

        for(char ch:s){
            ans[ch]++;

        }

        for(char ch:t){
            ans[ch]--;
            if(ans[ch]<0){
                return ch;
            }
        }
        return ' ';
    }
};