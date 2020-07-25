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
#define sortallase(x) sort(all(x))
#define sortalldse(x) sort(all(x), greater<>())
#define um unordered_map<ll, ll>
#define F first
#define S second
#define pb push_back
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




void solve(int t)
{
	ll i,j,m,a,b,rem,sum=0;
    while(t--)
    {
        ll count=0;
        ll n;
        cin>>n;
        ll flag=(ll)1e10;//mi
        um total;
        ll arr[n], brr[n];
        
        fo(i,n)
        {
            cin>>arr[i];
            total[arr[i]]++;
            flag = min(flag, arr[i]);
        }
        fo(i,n)
        {
            cin>>brr[i];
            total[brr[i]]++;
            flag = min(flag, brr[i]);
        }
        um res;//correct
        bool pos = 1;
        for(auto it : total)
        {
            if(it.S % 2)
            {
                pos = 0;
                break;
            }
            else
            {
                res[it.F] = it.S / 2;
            }
        }
        if(!pos)
        {
            cout<<-1<<endl;
            continue;
        }
        um reference = res;//ref
        vector<ll> v1,v2;
        fo(i,n)
        {
            if(reference[arr[i]])
            {
                reference[arr[i]]--;
            }
            else
            {
                v1.pb(arr[i]);
            }
        }
        reference = res;
        fo(i,n)
        {
            if(reference[brr[i]])
            {
                reference[brr[i]]--;
            }
            else
            {
                v2.pb(brr[i]);
            }
        }
        if(v1.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(v1.size()!=v2.size())
        {
            cout<<-1<<endl;
            continue;
        }

        sortallase(v1);
        sortalldse(v2);
        fo(i,v1.size())
        {
            count = count+min(2*flag, min(v1[i], v2[i]));
        }
        cout<<count<<endl;
}
}




int main()
{
	int t;
	cin>>t;
	solve(t);
	
	return 0;
}
