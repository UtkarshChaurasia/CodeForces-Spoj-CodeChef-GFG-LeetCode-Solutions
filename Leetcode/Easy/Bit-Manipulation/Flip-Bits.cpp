/*Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

Complexity: O(32) = O(1)
*/

class Solution {
public:
    
    int length(int n)
    {
        int count=0;
        while(n!=0)
        {
            count++;
            n = n>>1;
        }
        return count;
    }
    
    
    int findComplement(int num) {
        int len = length(num)-1;
        int test = 0;
        for(int i=0;i<=len;i++)
        {
            test = test+pow(2,i);
        }
        int res = num^test;
        return res;
        
    }
};

