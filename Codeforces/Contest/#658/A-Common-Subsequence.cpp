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
	int i,j,n,m,a,b,rem,count=0,sum=0,x;
    cin>>n>>m;
    vi arr(1001,0);
    vi brr(m);
    bool common = false;
    fo(i,n)
    {
        cin>>x;
        arr[x] = 1;
    }
    fo(i,m)
    {
        cin>>brr[i];
    }
    fo(i,m)
    {
        if(arr[brr[i]]>0)
        {
            common = true;
            cout<<"Yes"<<endl;
            cout<<1<<" "<<brr[i]<<endl;
            break;
        }
    }
    if(common == false)
    {
        cout<<"No"<<endl;
    }
    
}


/*   ANOTHER APPROACH USING SET INTERSECTION


void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    fo(i,n)
    {
        cin>>arr[i];
    }
    fo(i,m)
    {
        cin>>brr[i];
    }
    sort(arr,arr + n);
    sort(brr,brr + m);
    vi res(n+m);
    bool c= false;
    vector<int>::iterator it, st; 
  
    it = set_intersection(arr, arr + n, 
                          brr, brr + m, 
                          res.begin());
    for(st = res.begin();st != it; ++st)
    {
        cout<<"YES"<<endl;
        cout<<1<<" "<<*st<<endl;
        c = true;
        break;
    }
    if(c == false)
    {
        cout<<"NO"<<endl;
    }
    
}*/


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