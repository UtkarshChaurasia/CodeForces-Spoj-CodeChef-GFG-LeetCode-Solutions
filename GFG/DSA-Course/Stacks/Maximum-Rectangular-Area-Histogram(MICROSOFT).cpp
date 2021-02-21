/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, 
assume that all bars have the same width and the width is 1 unit.

Example 1:

Input:
N = 7
arr[] = {6,2,5,4,5,1,6}
Output: 12
Explanation: 


Example 2:

Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.
Your Task:
The task is to complete the function getMaxArea() which takes the array arr[] and its size N as inputs and finds the largest rectangular area possible and 
returns the answer.

Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)
*/

class Solution
{
    public:
    long long getMaxArea(long long arr[], int n){
    
 
    long long i=0,maxarea = 0,currarea;
    long long popind;
    stack<long long> st;
    while(i<n)
    {
        if(st.empty() || arr[st.top()]<=arr[i]) 
        {
            st.push(i++);
        }
        else
        {
            popind = st.top();
            st.pop();
            if(st.empty()) currarea = arr[popind] * i;
            else currarea = arr[popind] * (i-st.top()-1);
            maxarea = max(maxarea, currarea);
        }
        
        
    }
    while(!st.empty())
    {
        popind = st.top();
        st.pop();
        if(st.empty()) currarea = arr[popind] * i;
        else currarea = arr[popind] * (i-st.top()-1);
        maxarea = max(maxarea, currarea);
        
    }
    return maxarea;
    }
};
