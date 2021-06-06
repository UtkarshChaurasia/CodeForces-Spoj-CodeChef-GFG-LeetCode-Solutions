// Problem: https://leetcode.com/problems/basic-calculator-ii/submissions/

// 1st Approach : Time O(N) Space O(N)

class Solution {
public:
    int calculate(string str) {
        stack<long long> st;
        long long n = str.length();
        long long currnumber = 0;
        char operation = '+';
        for(long long i=0;i<n;i++)
        {
            char c = str[i];
            if(isdigit(c))
            {
                currnumber = currnumber*10 + c-'0';
            }
            if((!isdigit(c) && !iswspace(c)) || i==(n-1))
            {
                if(operation=='+')
                {
                    st.push(currnumber);
                }
                if(operation=='-')
                {
                    st.push(-1*currnumber);
                }
                if(operation=='*')
                {
                    long long top = st.top();
                    st.pop();
                    st.push(top*currnumber);
                }
                if(operation=='/')
                {
                    long long top = st.top();
                    st.pop();
                    st.push(top/currnumber);
                }
                currnumber = 0;
                operation = c;
            }
        }
        long long res = 0;
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};


// 2nd Approach: Time O(N) Space O(1)

class Solution {
public:
    int calculate(string str) {
        long long n = str.length();
        long long currnumber = 0,lastnumber=0,res=0;
        char operation = '+';
        for(long long i=0;i<n;i++)
        {
            char c = str[i];
            if(isdigit(c))
            {
                currnumber = currnumber*10 + c-'0';
            }
            if((!isdigit(c) && !iswspace(c)) || i==(n-1))
            {
                if(operation=='+' || operation=='-')
                {
                    res+=lastnumber;
                    lastnumber = (operation=='+') ? currnumber : -currnumber;
                }
                if(operation=='*')
                {
                    lastnumber*=currnumber;
                }
                if(operation=='/')
                {
                     lastnumber/=currnumber;
                }
                currnumber = 0;
                operation = c;
            }
        }
        res+=lastnumber;
        return res;
    }
};