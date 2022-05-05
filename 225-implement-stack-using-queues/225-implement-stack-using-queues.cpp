class MyStack {
public:
    queue<int>q,r;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        while(q.size()>1)
        {
            r.push(q.front());
            q.pop();
        }
        int res=q.front();
        q.pop();
        while(!r.empty())
        {
            q.push(r.front());r.pop();
        }
        return res;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
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