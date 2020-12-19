/*
Question Link: https://codeforces.com/contest/1454/problem/B
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


void solve()
{
	ll i,n,m,rem,count=0,sum=0,reqSum,fi,si,ansi,ansj;
	cin>>n;
	vi arr(n);
	fo(i,n)
	{
		cin>>arr[i];
	}
	ll maxi = *max_element(arr.begin(),arr.end());
	//deb(maxi)
	vi freq(maxi+1,0);
	fo(i,n)
	{
		freq[arr[i]]++;
	}
	bool found=false;
	fo(i,freq.size())
	{
		if(freq[i]==1)
		{
			ansi = i;
			found = true;
			break;
		}
		//cout<<freq[i]<<" ";
	}
	//deb(ansi)
	if(found==false)
	{
		cout<<-1<<endl;
		return;
	}
	fo(i,n)
	{
		if(arr[i]==ansi)
		{
			cout<<i+1<<endl;
			return;
		}
	}
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
