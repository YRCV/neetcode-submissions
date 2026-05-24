class Solution {
public:
    bool isAnagram(string s, string t) {
        // brute force solution: sort arrays, return true if equal
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t){ return true;}
        else { return false;}
    }
};
