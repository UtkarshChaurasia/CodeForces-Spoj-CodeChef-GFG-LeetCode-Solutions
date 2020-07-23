/*
Given a circular array C of integers represented by A, find the maximum possible sum of a non-empty subarray of C.

Here, a circular array means the end of the array connects to the beginning of the array.  (Formally, C[i] = A[i] when 0 <= i < A.length, and C[i+A.length] = C[i] when i >= 0.)

Also, a subarray may only include each element of the fixed buffer A at most once.  (Formally, for a subarray C[i], C[i+1], ..., C[j], there does not exist i <= k1, k2 <= j with k1 % A.length = k2 % A.length.)

 

Example 1:

Input: [1,-2,3,-2]
Output: 3
Explanation: Subarray [3] has maximum sum 3

Example 2:

Input: [5,-3,5]
Output: 10
Explanation: Subarray [5,5] has maximum sum 5 + 5 = 10

Example 3:

Input: [3,-1,2,-1]
Output: 4
Explanation: Subarray [2,-1,3] has maximum sum 2 + (-1) + 3 = 4

*/

class Solution {
public:
    
    int normalSum(vector<int>& A)
    {
        int n = A.size();
        int curr_sum = A[0];
        int max_sum = A[0];
        for(int i=1;i<n;i++)
        {
            curr_sum = max(A[i], curr_sum+A[i]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
    
    int maxSubarraySumCircular(vector<int>& A) {
        
        int n = A.size();
        int normal_max_sum = normalSum(A);
        if(normal_max_sum<0)
        {
            return normal_max_sum;
        }
        int tot_sum = 0, circular_max_sum,res;
        for(int i= 0;i<n;i++)
        {
            tot_sum += A[i];
            A[i] = -A[i];
        }
        circular_max_sum = tot_sum + normalSum(A);
        res = max(circular_max_sum, normal_max_sum);
        return res;
        
    }
};