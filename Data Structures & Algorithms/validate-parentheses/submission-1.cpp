class Solution {
public:
    bool isValid(string s) {
        stack<char> seen;
        for(char letter : s){
            if(letter == '(' or letter == '{' or letter == '['){
                seen.push(letter);
                continue;
            }
            if (!seen.empty()){
            if(letter == ')' && seen.top() == '('){
                seen.pop();
            } else if(letter == '}' && seen.top() == '{'){
                seen.pop();
            } else if(letter == ']' && seen.top() == '['){
                seen.pop();
            } else {
                return false;
            }
            } else {
                return false;
            }
            
        }

        if (seen.empty()){
            return true;
        }
        return false;
    }
};
