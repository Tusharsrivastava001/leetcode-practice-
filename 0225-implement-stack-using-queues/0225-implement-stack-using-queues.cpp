class MyStack {
public:
    std::queue<int> q;
    //yaha par ham queue use karege okay

    MyStack() {
        
    }
    
    void push(int x) {
       int n=q.size();
       q.push(x);
       //yaha par main kaam hoga hogaa
       for(int i=0;i<n;i++){
        q.push(q.front());
        q.pop();
       }
    }
    int pop() {
      int f=q.front();
      q.pop();
      return f;  
    }
    
    int top() {
        return q.front();
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