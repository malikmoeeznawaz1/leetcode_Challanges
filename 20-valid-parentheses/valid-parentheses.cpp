#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++){
            bool flag = false;

            if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
                st.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(st.empty()){
                    return false;
                }
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                    flag = true;
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                    flag = true;
                }
                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                    flag = true;
                }
               if(!flag){
                return false;
               }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};