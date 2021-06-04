/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

//RECURSION - O(2^0n)

class Solution {
int climbStairs(int n) {
        return climb_Stairs(0, n);
    }
    int climb_Stairs(int i, int n) {
        if (i > n) {
            return 0;
        }
        if (i == n) {
            return 1;
        }
        return climb_Stairs(i + 1, n) + climb_Stairs(i + 2, n);
    }
}


//DP - APPROACH 1 - SPACE and TIME-O(N)

class Solution {
public:
    
    
    int fun(int i,int n,int *dp)
    {
        if(i>n) return 0;
        if(i==n) return 1;
        if(dp[i]>-1) return dp[i];
        dp[i] = fun(i+1,n,dp)+fun(i+2,n,dp);
        return dp[i];
    }    
    
    
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        int i=0;
        return fun(i,n,dp);
    }
};

//DP(FIBONACCI) - APPROACH 2 - SPACE and TIME-O(N)
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int dp[n+1];
  
        dp[1]=1;
        dp[2]=2;
      
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};
