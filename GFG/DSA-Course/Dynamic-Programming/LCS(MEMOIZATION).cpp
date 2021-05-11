//O(x*y)

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1001][1001]
    memset(dp,-1,sizeof(dp));
    int lcs(int x, int y, string s1, string s2)
    {
        if(dp[x][y]!=-1) return dp[x][y];
        
        if(x==0||y==0) dp[x][y]=0;
        else
        {
            if(s1[x-1]==s2[y-1])
            {
                dp[x][y] = 1+lcs(x-1,y-1,s1,s2);
            }
            else
            {
                dp[x][y] = max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
            }
        }
        return dp[x][y];
    }
};
