class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;
        
        // Count only the characters that matter for "balloon"
        for (char ch : text) {
            if (ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n') {
                counts[ch]++;
            }
        }
        
        // The maximum number of words is limited by the bottleneck character
        return min({
            counts['b'], 
            counts['a'], 
            counts['l'] / 2, // Needs 2 per word
            counts['o'] / 2, // Needs 2 per word
            counts['n']
        });
    }
};