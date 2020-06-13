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



void solve(int arr[], int x, int n)
{
	int i,j,m,a,b,rem,countf=1,countb=1,redf=0,redb=0,sum=0;
	fo(i,n)
	{
		sum = sum+arr[i];
	}
		if(sum%x!=0)
		{
			cout<<n<<endl;
		}
		else
		{
			fo(i,n)
			{
				redf = redf+arr[i];
				redb = redb + arr[(n-1)-i];
				if((sum-redf)%x==0)
				{
					countf++;
				}
				if((sum-redb)%x==0)
				{
					countb++;
				}
				if((sum-redf)%x!=0 || (sum-redb)%x!=0)
				{
					break;
				}
				
			}
			if(countb>countf)
			{
				cout<<n-countf<<endl;
			}
			else if(countb<=countf && (countf!=0 && countb!=0))
			{
				cout<<n-countb<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
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
		int n,x,i;
		cin>>n>>x;
		int arr[n];
		fo(i,n)
		{
			cin>>arr[i];
		}
		
		solve(arr,x,n);
	}
	
	return 0;
}

