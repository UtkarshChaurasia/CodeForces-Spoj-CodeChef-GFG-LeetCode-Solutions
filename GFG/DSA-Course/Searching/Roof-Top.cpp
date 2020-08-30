/*
You are given heights of consecutive buildings. You can move from the roof of a building to the roof of next adjacent building. You need to find the maximum number of consecutive steps you can put forward such that you gain an increase in altitude with each step.

Example 1:

Input:
N = 5
A[] = {1,2,2,3,2}
Output: 1
Explanation: 1, 2 or 2, 3 are the only consecutive 
buildings with increasing heights.

Example 2:

Input:
N = 4
A[] = {1,2,3,4}
Output: 3
Explanation: 1 to 2 to 3 to 4 is the jump of
length 3 to have maximum number of 
buildings with increasing heights.

Your Task:
The task is to complete the function maxStep() which takes an array A[] (denoting the heights of buildings) and its size N as inputs and returns the maximum number of steps to gain increase in altitude.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1). 

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n;i>0;i--)
#define dfo(a,b,c) for(i=a;i<b;i+=c)
#define si(x)  scanf("%d", &x)
#define sl(x)  scanf("%lld", &x)
#define ss(s)  sacnf("%s", s)
#define pi(x)  printf("%d\n", x)
#define pl(x)  printf("%lld\n", x)
#define ps(s)  printf("%s\n", s)
#define deb(x) cout<< #x << "=" << x << endl;
#define deb2(x, y) cout<< #x << "=" << x <<","<< #y << "=" << y <<endl;
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define find(x,n) binary_search(all(x), n)
#define pb push_back
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pii;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

const int MOD = 1000000007;   //(10^9 + 7)



void solve()
{
	int i,j,n,m,a,b,rem,count=0,ans=0,sum=0;
	cin>>n;
	vi arr(n);
	fo(i,n)
	{
	    cin>>arr[i];
	}
	dfo(1,n,1)
	{
	    if(arr[i-1]<arr[i])
	    {
	        count++;
	    }
	    else if(arr[i-1]>=arr[i])
	    {
	        ans = max(ans,count);
	        count = 0;
	    }
	    if(i==(n-1))
	    {
	        ans = max(ans,count);
	    }
	}
	cout<<ans<<endl;
}





int mpow(int base, int exp)
{
	base %= MOD;
	int result = 1;
	while(exp>0)
	{
		if(exp & 1)
		{
			result = ((ll)result*base);
		}
		
		base = ((ll)base*base) % MOD;
		exp >>= 1;
	}
	
	return result;
}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}
