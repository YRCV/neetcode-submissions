class Solution {
public:
    // iterate through tokens, if number -> append to stack
    // if + - * /, pop 2 numbers from the stack and perform operation
    // append final number back to stack
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        string ops = "+-*/";
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i].size() > 1 || isdigit(tokens[i][0])){
                nums.push(stoi(tokens[i]));
                cout << "Pushing\n";
                continue;
            }
            if (ops.find(tokens[i]) != string::npos){
                int right = nums.top();
                nums.pop();
                int left = nums.top();
                nums.pop();

                int result = 0;
                if (tokens[i] == "+") { result = left + right; }
                else if (tokens[i] == "-") { result = left - right; }
                else if (tokens[i] == "*") { result = left * right; }
                else if (tokens[i] == "/") { result = left / right; }
                
                nums.push(result);
            }
        }
        return nums.top();
    }
};
