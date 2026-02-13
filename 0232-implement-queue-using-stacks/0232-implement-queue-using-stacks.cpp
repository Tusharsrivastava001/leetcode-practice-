class MyQueue {
public:
    std::stack<int> st,s1;
    MyQueue() {
        
    }
    
    void push(int x) {
        int n=st.size();
        st.push(x);
    }
    
    int pop() {
        if(s1.empty()){
            while(!st.empty()){
            s1.push(st.top());
            st.pop();
        }
        }
        int n=s1.top();
        s1.pop();
        return n;
    }
    
    int peek() {
        if(s1.empty()){
            while(!st.empty()){
            s1.push(st.top());
            st.pop();
        }
        }
        return s1.top();
    }
    
    bool empty() {
        return s1.empty() && st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */