class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int temp;
        if(q2.empty())
            temp = -1;
        else
        {
            temp = q2.front();
            q2.pop();
        }
        return temp;
    }
    
    int top() {
        int temp;
        if(q2.empty())
            temp = -1;
        else
            temp = q2.front();
        return temp;
    }
    
    bool empty() {
        if(q2.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
