class MyStack {
public:
   queue<int> q1;
MyStack() {
    
}
 void push(int x) {
        int n=q1.size();
        q1.push(x);
        while(n--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        if(q1.empty())return -1;
        int e=q1.front();
        q1.pop();
        return e;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
