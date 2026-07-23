class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word)
            words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> pToW;
        unordered_map<string, char> wToP;

        for (int i = 0; i < pattern.size(); i++) {

            char p = pattern[i];
            string w = words[i];

            if (pToW.count(p) && pToW[p] != w)
                return false;

            if (wToP.count(w) && wToP[w] != p)
                return false;

            pToW[p] = w;
            wToP[w] = p;
        }

        return true;
    }
};