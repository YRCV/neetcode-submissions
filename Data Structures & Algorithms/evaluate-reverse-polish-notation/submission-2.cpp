class Solution {
public:
    // iterate through tokens, if number -> append to stack
    // if + - * /, pop 2 numbers from the stack and perform operation
    // append final number back to stack
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;

        for (const string& token : tokens){
            if (token == "+" || token == "-" || token == "*" || token == "/"){
                int right = nums.top(); nums.pop();
                int left = nums.top(); nums.pop();

                if (token == "+") nums.push(left + right);
                else if (token == "-") nums.push(left - right);
                else if (token == "*") nums.push(left * right);
                else if (token == "/") nums.push(left / right);
            } else{
                nums.push(stoi(token));
            }
        }

        return nums.top();
    }
};
