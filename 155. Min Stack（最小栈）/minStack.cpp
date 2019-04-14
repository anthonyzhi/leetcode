class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>a;
    int tp,min;
    MinStack() {
        tp=-1;
        min=INT_MAX;
    }
    
    void push(int x) {
        a.push_back(x);
        tp++;
        min=x<min?x:min;
    }
    
    void pop() {
        if(tp!=-1){
            if(a[tp]<=min){
                min=INT_MAX;
                for(int i=0;i<tp;i++)
                    min=a[i]<min?a[i]:min;
            }
            a.pop_back();
            tp--;
        }
    }
    
    int top() {
       if(tp!=-1)
           return a[tp];
        return NULL;
    }
    
    int getMin() {
        if(tp!=-1)
            return min;
        return NULL;
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
