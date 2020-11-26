/*
Let f(x) be the number of zeroes at the end of x!. (Recall that x! = 1 * 2 * 3 * ... * x, and by convention, 0! = 1.)

For example, f(3) = 0 because 3! = 6 has no zeroes at the end, while f(11) = 2 because 11! = 39916800 has 2 zeroes at the end. 

Given K, find how many non-negative integers x have the property that f(x) = K.

Example 1:
Input: K = 0
Output: 5
Explanation: 0!, 1!, 2!, 3!, and 4! end with K = 0 zeroes.

Example 2:
Input: K = 5
Output: 0
Explanation: There is no x such that x! ends in K = 5 zeroes.

*/

class Solution {
    
    long trailingZeroes(long n)
    {
        long res=0;
        while(n>0)
        {
            res+=n/5;
            n/=5;
        }
        return res;
    }
    
    
public:
    int preimageSizeFZF(int K) {
        long l = 0;
        long long r = 5L*(K+1);
        long mid = 0;
        while(l<r)
        {
            mid = (l+r)/2;
            long k = trailingZeroes(mid);
            if(k<K)
            {
                l = mid+1;
            }
            else if(k>K)
            {
                r = mid-1;
            }
            else if(k==K)
            {
                return 5;
            }
        }
        return 0;
    }
};
