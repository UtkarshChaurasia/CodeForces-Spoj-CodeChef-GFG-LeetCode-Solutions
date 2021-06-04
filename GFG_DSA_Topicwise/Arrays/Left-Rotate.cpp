/*Given an array of size n and multiple values around which we need to left rotate the array.

Input:
First line consists of T test case. First line of every test case consists of N and K, N denoting number of elements of array and K denoting the number of places to shift. Second line of every test case consists of elements of array.

Output:
Single line output, print the rotated array.

Constraints:
1<=T<=100
1<=N<=10^4
1<=K<=10^4

Example:
Input:
1
5 14
1 3 5 7 9
Output:
9 1 3 5 7

Optimized Solution:
Time O(n)
Space O(1)

*/

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
	int i,j,n,m,a,b,rem,count=0,sum=0,k;
	cin>>n>>k;
	//int arr[n];
	if(k>n)
	{
	    k = k-(n*(k/n));
	}
	//deb(k);
	vi arr(n);
	fo(i,n)
	{
	    cin>>arr[i];
	}
	reverse(arr.begin(),arr.end()-((n-1)-(k-1)));
	reverse(arr.begin()+k,arr.end());
	reverse(arr.begin(),arr.end());
	fo(i,n)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
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
