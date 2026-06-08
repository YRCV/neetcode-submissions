class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window with string slicing, cleaned vers
        string window = "";
        int longest = 0;
        for (char c : s){
            if (window.contains(c)){
                window = window.substr(window.find(c) + 1);
            }
            
            window.push_back(c);
            longest = max(longest, (int)window.size());
        }

        return longest;
    }
};
