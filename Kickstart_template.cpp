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
#define digCount(x) floor(log10(n)+1)
#define find(x,n) binary_search(all(x), n)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pi;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;
typedef vector<pi>    vpi;
typedef vector<pl>    vpl;
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

/*  SEIVE CODE COMMENTED DUE TO MEMORY USAGE
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
}*/



ll gcdll(ll a,ll b) {
    if (b==0) return a;
    return gcdll(b,a%b);
}


int gcd(int a,int b) {
    if (b==0) return a;
    return gcd(b,a%b);
}

void solve(int t)
{
    int k;
    dfo(k,t+1,1)
    {
        int i,j,n,m,a,b,rem,count=0,sum=0;
        
        
        
        
        cout<<"Case #"<<k<<": "<<;
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
	solve(t);
	
	return 0;
}
