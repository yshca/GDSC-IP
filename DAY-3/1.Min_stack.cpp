class MinStack { 
    stack<int> s,min;
public: 
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(!min.empty()){
            if( min.top() >=val)
                min.push(val);
        }else
             min.push(val);
    }
    
    void pop() {
        if(!s.empty()){
            if(s.top() ==min.top())
                min.pop();
             s.pop();
        }
    }
    
    int top() {
        if(!s.empty()) 
            return s.top();
        return -1;
    }
    
    int getMin() {
        if(!min.empty()) 
            return min.top();
        return -1;
    }
};