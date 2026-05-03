class MinStack {
public:
    MinStack() {
        min = INT_MAX;
        k=-1;
    }
    
    void push(int val) {
        if(val < min){
            min = val;
        }
        stack.push_back(val);
        k++;
    }
    
    void pop() {
        if(stack[k]==min){
            min = findMin(stack);
        }
        stack.pop_back();
        k--;
    }
    
    int top() {
        return stack[k];
    }
    
    int getMin() {
        return min;
    }
private :
    std::vector<int> stack;
    int k;
    int min;

    int findMin(std::vector<int> minStack){
        int result = INT_MAX;
        for(int i = 0; i<minStack.size()-1; i++){
            if(minStack[i] < result){
                result = minStack[i];
            }        
        }
        return result;
    }
};
