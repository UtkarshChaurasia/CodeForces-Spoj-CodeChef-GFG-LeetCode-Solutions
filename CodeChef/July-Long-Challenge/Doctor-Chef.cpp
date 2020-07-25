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
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define find(x,n) binary_search(all(x), n)
#define pb push_back
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pii;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

const int MOD = 1000000007;   //(10^9 + 7)


ll mulCount(ll n,ll x)
{
   ll count = 0;
    while(x<n)
    {
        x = x*2;
        count++;
    }
    return (count+1);
}




void solve()
{
	ll i,j,n,m,x,a,b,rem,count=0,sum=0,lesscount=0;
	cin>>n>>x;
	vl arr;
	fo(i,n)
	{
	    //cin>>arr[i];
	    cin>>a;
	    if(a*2>=x)
	    {
	        arr.pb(a);
	    }
	    else
	    {
	        count++;
	    }
	}
	sortall(arr);
	fo(i,arr.size())
	{
	    if(x>arr[i])
	    {
	        x = arr[i]*2;
	        arr[i] = 0;
	    }
	    
	    else if(x==arr[i])
	    {
	        x = arr[i]*2;
	        arr[i] = 0;
	    }
	    else
	    {
	        //count = count + mulCount(arr[i], x);
	        i--;
	        x = 2*x;
	    }
	    count++;
	}
	cout<<count<<endl;
	
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
