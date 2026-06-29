class MinStack {
public:
    vector<pair<int,int>> stack;

    MinStack() { }
    
    void push(int val) {
        if (stack.empty()){
            stack.push_back({val,val});
        } else {
            stack.push_back({val, min(val, stack.back().second)});
        }
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
    }
};
