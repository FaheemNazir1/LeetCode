class Solution {
public:
    int maxDistinct(string s) {
        int arr[26]={0};
        int count = 0;

        for(char ch:s){
            arr[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                count++;
            }
        }
        return count;
    }
};