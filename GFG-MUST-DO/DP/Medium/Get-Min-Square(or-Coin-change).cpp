//Problem: https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1

class Solution{
	public:
	int MinSquares(int n)
	{
	    // Code here
	    int sqlen = sqrt(n);
	    vector<long long> sq(sqlen,0);
	    for(int i=0;i<sqlen;i++) sq[i] = (i+1)*(i+1);
	    //for(int i=0;i<sqlen;i++) cout<<sq[i]<<endl;
	    vector<int> dp(n+1, 100001);
	    dp[0] = 0;
	    for(int i = 1;i<=n;i++)
	    {
	        for(int j=0;j<sqlen;j++)
	        {
	            if(sq[j]<=i) dp[i] = min(dp[i], dp[i-sq[j]]+1);
	        }
	    }
	    return dp[n];
	}
};