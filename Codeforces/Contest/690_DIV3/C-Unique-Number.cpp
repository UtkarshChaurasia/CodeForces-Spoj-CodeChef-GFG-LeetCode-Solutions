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
#define find(x,n) binary_search(all(x), n)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pii;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;
typedef set<int>   si;
typedef set<ll>   sl;
typedef unordered_map<int, int> umi;
typedef map<int, int> mi;

const int MOD = 1000000007;   //(10^9 + 7)


bool isprime(ll n) 
{ 
  if (n <= 1) return false; 
  if (n <= 3) return true; 

  if (n % 2 == 0 || n % 3 == 0) return false; 

  for (ll i = 5; i * i <= n; i += 6) 
	if (n % i == 0 || n % (i+2) == 0) 
	  return false; 

  return true; 
} 

bool prime[15000105]; 
void sieve(int n) 
{ 
  for (ll i = 0; i <= n; i++) prime[i] = 1;
  for (ll p = 2; p * p <= n; p++) 
  { 
	if (prime[p] == true) 
	{ 
	  for (ll i = p * p; i <= n; i += p) 
		prime[i] = false; 
	} 
  } 
  prime[1] = prime[0] = 0;
}



ll gcdll(ll a,ll b) {
    if (b==0) return a;
    return gcdll(b,a%b);
}


int gcd(int a,int b) {
    if (b==0) return a;
    return gcd(b,a%b);
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



void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0;
    cin>>n;
    if(n>=0 && n<10)
    {
        cout<<n;
    }
    else if(n>=10 && n<=17)
    {
        int b = 19;
        int res = (n-10)*10 + b;
        cout<<res;
    }
    else if(n>=18 && n<=24)
    {
        int b = 189;
        int res = (n-18)*100 + b;
        cout<<res;
    }
    else if(n>=25 && n<=30)
    {
        ll b = 1789;
        ll res = (n-25)*1000 + b;
        cout<<res;
    }
    else if(n>=31 && n<=35)
    {
        ll b = 16789;
        ll res = (n-31)*10000 + b;
        cout<<res;
    }
    else if(n>=36 && n<=39)
    {
        ll b = 156789;
        ll res = (n-36)*100000 + b;
        cout<<res;
    }
    else if(n>=40 && n<=42)
    {
        ll b = 1456789;
        ll res = (n-40)*1000000 + b;
        cout<<res;
    }
    else if(n>=43 && n<=44)
    {
        ll b = 13456789;
        ll res = (n-43)*10000000 + b;
        cout<<res;
    }
    else if(n==45)
    {
        
        cout<<123456789;
    }
    else
    {
        cout<<-1;
    }
    cout<<endl;
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


