class MinStack {
public:
    /** initialize your data structure here. */
    /*  use two stacks one for data, the other for minimun    */
    
    stack<int>mystack;
    stack<int>mini_stack;
    
    MinStack() {
     
    }
    
    void push(int x) {
        mystack.push(x);
        if(mini_stack.empty()){
            mini_stack.push(x);
        }
        else{
            if(x<=mini_stack.top()){
                mini_stack.push(x);
            }
            else{
                mini_stack.push(mini_stack.top());//讓他保持最小 pop後也一樣，簡單說就是放一樣的讓他pop出去
            }
        }
    }
    
    void pop() {
        mystack.pop();
        mini_stack.pop();

    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return mini_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */