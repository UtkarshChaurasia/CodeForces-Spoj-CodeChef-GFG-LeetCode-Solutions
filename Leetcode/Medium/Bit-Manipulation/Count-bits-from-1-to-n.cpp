/*
Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example 1:

Input: 2
Output: [0,1,1]

Example 2:

Input: 5
Output: [0,1,1,2,1,2]

Follow up:

    It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
    Space complexity should be O(n).
    Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
    
    
    
    OPTIMIZED DP Approach
    TIME: O(N)

*/


class Solution {
public:
    
    // dp implementation function
    int find(int n, vector<int> &res)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(res[n]!=-1)
        {
            return res[n];
        }
        else
        {
            if(n%2==0)
            {
                res[n]=find(n/2, res); //store intermmediate value
                return find(n/2, res); //call the function again
            }
            else
            {
                res[n]=1+find(n/2, res); //store intermmediate value
                return 1+find(n/2,res);  //call the function again
            }
        }
    }
    
    
    
    
    vector<int> countBits(int n) {
        vector<int> res(n+1, -1);
        for(int i=0;i<=n;i++)
        {
            res[i]=find(i,res);
        }
        return res;
        
        
    }
};
