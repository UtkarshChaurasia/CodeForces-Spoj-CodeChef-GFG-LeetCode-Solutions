/*
https://codeforces.com/contest/1454/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n-1;i>=0;i--)
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
	ll i,n,m,rem,count=0,sum=0,reqSum,fi,si,ansi,ansj;
	cin>>n;
	ll sq = ceil(sqrt(n));
	ll maxp=INT_MIN,maxi=1;
	ll pf;
	dfo(2,sq+1,1)
	{
		if(n%i==0)
		{
			ll p = 0,copy = n;
			while(copy>0 && copy%i == 0)
			{
				p++;
				copy/=i;
			}
			if(maxp<p)
			{
				maxp=p;
				maxi = i;
			}
		}
	}
	//deb2(maxp,maxi)
	if(maxi==1)
	{
		cout<<1<<endl<<n<<endl;
		return;
	}
	cout<<maxp<<endl;
	while(n%(maxi*maxi)==0)
	{
		cout<<maxi<<" ";
		n/=maxi;
	}
	cout<<n<<endl;
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
