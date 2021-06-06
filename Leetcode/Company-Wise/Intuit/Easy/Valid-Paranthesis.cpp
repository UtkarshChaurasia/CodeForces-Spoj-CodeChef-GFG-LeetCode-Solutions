// Problem: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string str) {
        int n = str.size();
        stack<char> st;
        st.push(str[0]);
        for(int i = 1;i<n;i++)
        {
            if(!st.empty())
            {
                char c = st.top();
                if((c=='(' && str[i]==')') || (c=='{' && str[i]=='}') || (c=='[' && str[i]==']'))
                    st.pop();
                else
                    st.push(str[i]);
              
            }
            else
                st.push(str[i]);
        }
        if(st.empty()) return true;
        return false;
    }
};