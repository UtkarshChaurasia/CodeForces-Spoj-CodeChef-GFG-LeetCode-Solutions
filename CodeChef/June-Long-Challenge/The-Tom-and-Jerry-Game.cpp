#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n;i>0;i--)
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
	int i,j,n,m,a,b,rem,sum=0;
  ll ts,count=0,res;
		cin>>ts;
		ll tsc=ts;
		if(ts%2==0)
		{
			while(ts%2==0)
			{
				count++;
				ts=ts/2;
			}
			if(ts==1)
			{
				cout<<0<<endl;
			}
			else
			{
					ll po = pow(2,count+1);
					res=(tsc/po);
					cout<<res<<endl;
			}
				
		}
			
		else if(ts>1 && (ts%2!=0))
		{
			res=(tsc/2);
			cout<<res<<endl;
		}
		else
		{
			cout<<0<<endl;
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
