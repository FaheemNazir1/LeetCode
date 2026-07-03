class Solution {
public:
    int maxDistinct(string s) {
        set<char> abc(s.begin(),s.end());
        return abc.size();
    }
};