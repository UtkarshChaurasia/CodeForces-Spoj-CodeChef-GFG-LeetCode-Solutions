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


int sumofDigit(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sumofDigit(n / 10)); 
} 


void solve()
{
	ll i,j,n,m,a,b,rem,count=0,sum=0,dif=0,chef=0,mort=0,k;
	cin>>k;
	char board[8][8];
	board[0][0] = 'O';
	k--;
	fo(i,8)
	{
	    fo(j,8)
	    {
	        if(i==0 && j==0)
	        {
	            continue;
	        }
	        if(k)
	        {
	            board[i][j]='.';
	            k--;
	        }
	        else
	        {
	            board[i][j]='X';
	        }
	    }
	}
	
	
	fo(i,8)
	{
	    fo(j,8)
	    {
	        cout<<board[i][j];
	    }
	    cout<<endl;
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
