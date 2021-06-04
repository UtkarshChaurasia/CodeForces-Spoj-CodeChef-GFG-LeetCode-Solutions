class Solution {
public:
 

    int longestCommonSubsequence(string text1, string text2) {
        int x = text1.length();
        int y = text2.length();
        int dp[x+1][y+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<=x;i++)
        {
            dp[i][0] = 0;
        }
        for(int j=0;j<=y;j++)
        {
            dp[0][j]=0;
        }
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(text1[i-1]==text2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        return dp[x][y];
    }
};
