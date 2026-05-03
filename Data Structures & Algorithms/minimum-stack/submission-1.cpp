class MinStack {
public:
    MinStack() {
        k=-1;        
    }
    
    void push(int val) {
        if(k==-1){
        stack.push_back(val);
        minStack.push_back(val);
        }
        else{
            stack.push_back(val);
            minStack.push_back(val < minStack[k] ? val : minStack[k]);
        }
        k++;
    }
    
    void pop() {
        if(k==-1)
        return;
        stack.pop_back();
        minStack.pop_back();
        k--;
    }
    
    int top() {
        return stack[k];
    }
    
    int getMin() {
        return minStack[k];
    }
private :
    std::vector<int> stack;
    std::vector<int> minStack;
    int k;
};
