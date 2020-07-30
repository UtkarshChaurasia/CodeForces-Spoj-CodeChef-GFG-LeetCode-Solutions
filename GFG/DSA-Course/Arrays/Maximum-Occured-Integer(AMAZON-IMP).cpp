/*
Given two arrays L[] and R[] consisting of N ranges of the form L and R, L[i] consists of starting point of range and R[i] consists of corresponding end point of the range. The task is to find the maximum occurred integer in all the ranges. If more than one such integer exits, print the smallest one.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the ranges. The next two lines contain the n space separated elements of L and R respectively.

Output:
Print the smallest maximum occured integer in all the ranges.

Constraints:
1 <= T <= 105
1 <= n <= 105
0 <= L[i], R[i] <= 105

Example:
Input:
2
4
1 4 3 1
15 8 5 4
5
1 5 9 13 21
15 8 12 20 30

Output:
4
5

Explanation:
Testcase 1: 4 is the most occuring element after considering all the ranges. So, output is 4.

OPTIMIZED

TIME: O(N)
SPACE: O(N)
*/


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
	int i,j,n,m,a,b,rem,count=0,sum=0,res,maxfreq=0;
	vi arr(100000);
	cin>>n;
	vi L(n);
	vi R(n);
	vi presum(100000);
	fo(i,n)
	{
	    cin>>L[i];
	}
	fo(i,n)
	{
	    cin>>R[i];
	}
	fo(i,n)
	{
	    arr[L[i]]++;
	    arr[R[i]+1]--;
	}
	presum[0] = arr[0];
	dfo(1,100000,1)
	{
	    presum[i] = presum[i-1] + arr[i];
	    if(presum[i]>maxfreq)
	    {
	        maxfreq = presum[i];
	        res = i;
	    }
	}
	cout<<res<<endl;
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
