// https://leetcode.com/problems/valid-parentheses/description/
// 20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        // traversing the string via for loop
        for(int i = 0; i <s.length(); i++){

            char ch = s[i]; //take one char at a time in for loop

            if(ch == '(' || ch == '{' || ch == '[' ){
                // if ch is opening brackets
                st.push(ch);
            }else{
                // if ch is closing brackets

                // since accessing top or poping -- CHECK IF STACK IS EMPTY OR NOT - 
                if(!st.empty()){
                        if(ch == ')' && st.top() == '('){
                            st.pop();
                        }else if(ch == '}' && st.top() == '{'){
                            st.pop();
                        }else if(ch == ']' && st.top() == '['){
                            st.pop();
                        }else{
                            return false;
                            // handles odd no ie when stack is empty
                            // when not a match

                        }
                }else{
                        // when stack empty but string is not
                        return false;
                }
                
            }
        }

        // check when string empty but not stack
        if(st.size() == 0){
            // all canceled 
            return true;
        }else{
            return false;
        }
    }
};

// EDGE CASE
// check stack empty or not - 
// when stack empty but not string
// when stack filled but string is empty
