class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> state;
        int start = 0;
        int maxFreq = 0;
        int longestSub = 0;

        for(int end = 0; end < s.size(); end++){
            state[s[end]]++;
            maxFreq = max(maxFreq, state[s[end]]);

            while (end - start + 1 - maxFreq > k){
                state[s[start]]--;
                if (state[s[start]] == 0){
                    state.erase(s[start]);
                }
                start++;
            }

            longestSub = max(longestSub, end - start + 1);
        }

        return longestSub;
    }
};
