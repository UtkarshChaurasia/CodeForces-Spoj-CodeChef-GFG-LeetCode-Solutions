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
	int i,j,n,m,a,b,rem,count=0,sum=0;
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
	ll min=1,max,mid,min1=1,max1,mid1, n;
	cin>>n;
	max = n;
	max1 = n;
	while(min1<max1||min<max)
	{
		mid = (min+max)/2;
		cout<<mid<<endl<<flush;
		char x,y;
		cin>>x;
		if(x=='E')
			return 0;
			
		if(x=='G')
			min=mid;
			
		if(x=='L')
			max=mid;
			
		mid1=(min1+max1)/2;
		cout<<mid1<<endl<<flush;
		cin>>y;
		if(y=='E')
			return 0;
			
		if(y=='G')
			min1=mid1;
			
		if(y=='L')
			max1=mid1;
	}

	return 0;
}
