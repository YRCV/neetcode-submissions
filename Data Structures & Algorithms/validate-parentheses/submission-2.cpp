class Solution {
public:
    bool isValid(string s) {
        stack<char> seen;
        unordered_map<char,char> brackets = {
            {')','('},
            {'}','{'},
            {']', '['}
        };

        for (char letter : s){
            if (brackets.count(letter)){
                if (seen.empty() || brackets[letter] != seen.top()){
                    return false;
                }
                seen.pop();
            } else {
                seen.push(letter);
            }
        }

        return seen.empty();
    }
};
