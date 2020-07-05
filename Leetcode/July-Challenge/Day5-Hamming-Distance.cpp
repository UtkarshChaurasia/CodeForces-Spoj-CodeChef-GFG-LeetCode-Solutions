class Solution {
public:
    int hammingDistance(int x, int y) {
        int XOR = x^y;
        int count = 0;
        while(XOR!=0)
        {
            if((XOR&1)!=0)
            {
                count++;
            }
            XOR = XOR>>1;
        }
        return count;
        
    }
};
