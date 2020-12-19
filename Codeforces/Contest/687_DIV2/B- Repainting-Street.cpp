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

const int MOD = 1000000007;   //(10^9 + 7)

bool cmp(pair<int,int>a ,pair<int,int> b)
{
	return a.second>b.second;
}

void solve()
{
	ll k,s,i,rem,sum=0,reqSum,fi,si,ansi,ansj;
    int n,m,j=1,r,c;
    cin>>n>>k;
    vi arr(n);
    set<int> st;
    fo(i,n)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    
    int ans = INT_MAX;
    auto it = st.begin();
    while(it!=st.end())
    {
        int temp = 0;
        int color = *it;
        i=0;
        while(i<n)
        {
            if(arr[i]==color)
            {
                i++;
            }
            else
            {
                temp++;
                i = i+k;
            }
            
        }
        ans = min(ans,temp);
        it++;
    }
    

    
    cout<<ans<<endl;
    
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
    //solve();
	
	return 0;
}
