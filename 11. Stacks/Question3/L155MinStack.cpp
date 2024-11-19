// MIN STACK - RETURNS MIN OF STACK IN O(1) , otherwise normal stack takes 0(N) TC for returning min of stack
// FOR other op like - push , pop, size, top, empty - all in O(1) in both min and normal stack

// 155. Min Stack
// https://leetcode.com/problems/min-stack/description/


class MinStack {
public:
    vector <pair <int,int> > st; // use vector or array as stack
    MinStack() {
        // constructor
    }
    
    void push(int val) {
        // stack can't be full - as vector dynamic in nature
        pair<int,int> p;

        //2 cases -  stack empty and already filled
        if(st.empty()){
            p.first =  val;
            p.second = val; //for first element - val itself is minimum
            st.push_back(p);
        }else{
            p.first = val;
            // access previous block  - st.back()  -------------help to access RIGHTMOST ELEMENT
            // access previous block min - st.back().second
            int prevmin = st.back().second;
            p.second = min(val,prevmin);
            st.push_back(p);
        }   
    }
    
    void pop() {
        // handle underflow - no need as 'Methods pop, top and getMin operations will always be called on non-empty stacks.'
        // handle when poping  - if min is chaning or not --??
        st.pop_back();
    }
    
    int top() {
        pair <int,int> rightmostpair = st.back();
        return rightmostpair.first;
    }
    
    int getMin() {
        pair <int,int> rightmostpair = st.back();
        return rightmostpair.second;
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
