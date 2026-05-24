class Solution {
public:
    bool isAnagram(string s, string t) {
        // efficient solution: build maps of both strings and compare
        unordered_map <char, int> freqS;
        unordered_map <char, int> freqT;
        
        if (s.size() != t.size()){ return false; }
        for (char charS : s){ freqS[charS]++; }
        for (char charT : t){ freqT[charT]++; }

        for (char letter : s){
            if (freqS[letter] != freqT[letter]){ return false; }
        }

        return true;
    }
};
