//Problem: https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1#

//Generalization of problem where m = max step can be taken


#include <iostream>
using namespace std;

// Returns number of ways
// to reach s'th stair
long long countWays(int n, int m)
{
    long long res[n + 1];
    long long temp = 0;
    res[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        long long s = i - m - 1;
        long long e = i - 1;
        if (s >= 0)
        {
            temp -= res[s];
        }
        temp += res[e];
        res[i] = temp;
    }
    return res[n];
}

// Driver Code
int main()
{
    int n = 84, m = 2;
    cout << "Number of ways = " 
         << countWays(n, m);
    return 0;
}

//Specific sol

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
   
    int countWays(int n)
    {
        // your code here
        
        if(n<=1) return 1;
        int mod = 1000000007;
        int a = 1, b= 1, temp;
        for(int i=2;i<=n;i++)
        {
            temp=(a+b)%mod;
            a = b;
            b = temp;
        }
        return b;
    }
};
