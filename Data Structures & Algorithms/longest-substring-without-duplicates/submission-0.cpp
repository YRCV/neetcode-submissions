class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // use sliding window technique, left=0, right=0
        // add char to a str, if window.find() == true,
        // index = window.find(char),
        // max_size = max(max_size, window.size())
        // window = substring(index, end)
        // this cuts off the characters before the new one was found

        int left = 0;
        string window;
        int longest = -1;
        for (int right = 0; right < s.size(); right++){
            if (window.contains(s[right])){
                int size = window.size();
                longest = max(longest, size);
                window = window.substr(window.find(s[right]) + 1);
                window.push_back(s[right]);
            } else {
                window.push_back(s[right]);
            }
        }
        int size = window.size();
        longest = max(longest, size);
        return longest;
    }
};
