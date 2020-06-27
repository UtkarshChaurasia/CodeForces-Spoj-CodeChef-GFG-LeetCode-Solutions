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

int power(int i,int n)
{
    int res = 0;
    while(n!=0)
    {
        res = res+pow(2,i);
        n--;
    }
    return res;
}


void solve()
{
	int i,j,n,k,m,a,b,rem,count,sum=0;
	cin>>n>>k;
	int bits[32];
	int val[32];
	int arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	fo(i,32)
	{
	    count = 0;
	    fo(j,n)
	    {
	        if((arr[j] & (1<<i)))
	        {
	            count++;
	        }
        }
        bits[i]=count;
	}
	for(i=31;i>=0;i--)
	{
	    val[i] = power(i,bits[i]);
	}
	sort(val, val+n, greater<int>());
	fo(i,k)
	{
	    res =res+()
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
