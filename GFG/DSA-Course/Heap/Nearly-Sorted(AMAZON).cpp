/*
Given an array of n elements, where each element is at most k away from its target position, you need to sort the array optimally.

Example 1:

Input:
n = 7, k = 3
arr[] = {6,5,3,2,8,10,9}
Output: 2 3 5 6 8 9 10
Explanation: The sorted array will be
2 3 5 6 8 9 10
Example 2:

Input:
n = 5, k = 2
arr[] = {4,3,1,2,5}
Output: 1 2 3 4 5 
Note: DO NOT use STL sort() function for this question.

Your Task:
You are required to complete the method nearlySorted() which takes 3 arguments and returns the sorted array.

Expected Time Complexity : O(nlogk)
Expected Auxilliary Space : O(n)
*/

class Solution{
    public:
        vector <int> nearlySorted(int arr[], int n, int k){
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> res(n,0);
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
        int ind=0;
        for(int i=k;i<n;i++)
        {
            res[ind++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            res[ind++] = pq.top();
            pq.pop();
        }
        return res;
    }
};
