/*
Reverse bits of a given 32 bits unsigned integer.

 

Example 1:

Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.

Example 2:

Input: 11111111111111111111111111111101
Output: 10111111111111111111111111111111
Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.


APPROACH:

The key idea is that for a bit that is situated at the index i, after the reversion, its position should be 31-i (note: the index starts from zero).

1. We iterate through the bit string of the input integer, from right to left (i.e. n = n >> 1). To retrieve the right-most bit of an integer, we apply the bit AND operation (n & 1).
2. For each bit, we reverse it to the correct position (i.e. (n & 1) << power). Then we accumulate this reversed bit to the final result.
3. When there is no more bits of one left (i.e. n == 0), we terminate the iteration. 

Complexity: O(1)

*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ret = 0,power=31;
        while(n!=0)
        {
            ret +=(n&1)<<power;
            n = n>>1;
            power = power-1;
        }
        return ret;
    }
};
