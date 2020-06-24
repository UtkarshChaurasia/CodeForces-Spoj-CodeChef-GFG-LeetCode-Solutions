#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n-1;i>0;i--)
#define si(x)  scanf("%d", &x)
#define sl(x)  scanf("%lld", &x)
#define ss(s)  sacnf("%s", s)
#define pi(x)  printf("%d\n", x)
#define pl(x)  printf("%lld\n", x)
#define ps(s)  printf("%s\n", s)
#define deb(x) cout<< #x << "=" << x << endl;
#define deb2(x, y) cout<< #x << "=" << x <<","<< #y << "=" << y <<endl;
#define all(x) a.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
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
	int i=0,n,m,a,b,rem,count,k,sum=0;
	string str;
	cin>>n;
	int j = n-1;
	cin>>str;
	while(str[i]=='0' && i<n)
	{
		i++;
	}
	while(str[j]=='1' && j>=0)
	{
		j--;
	}
	if(i>j)
	{
		cout<<str<<endl;
	}
	else
	{
		string ans = "";
		for(k=0;k<i;k++)ans+='0';
		ans += '0';
		while(j<n-1)
		{
			ans = ans + '1';
			j++;
		}
		cout<<ans<<endl;
	}
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
