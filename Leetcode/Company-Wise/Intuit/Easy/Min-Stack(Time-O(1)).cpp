//Problem: https://leetcode.com/problems/min-stack/


class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<int> st;
    stack<int> minstack;
    
    void push(int val) {
        if(st.empty() && minstack.empty())
        {
            st.push(val);
            minstack.push(val);
        }
        else
        {
            int currmin = minstack.top();
            if(currmin>=val) minstack.push(val);
            st.push(val);
        }
    }
    
    void pop() {
        if(st.top()==minstack.top())
        {
            minstack.pop();
        }
        st.pop();
    }
    
    int top() {
        int n = st.top();
        return n;
    }
    
    int getMin() {
        int mini = minstack.top();
        return mini;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */