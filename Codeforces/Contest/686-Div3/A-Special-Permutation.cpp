/*
You are given one integer n (n>1).

Recall that a permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a 
permutation of length 5, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

Your task is to find a permutation p
of length n that there is no index i (1≤i≤n) such that pi=i (so, for all i from 1 to n the condition pi≠i should be satisfied).

You have to answer t independent test cases.

If there are several answers, you can print any. It can be proven that the answer exists for each n>1.

Input

The first line of the input contains one integer t (1≤t≤100) — the number of test cases. Then t test cases follow.

The only line of the test case contains one integer n (2≤n≤100) — the length of the permutation you have to find.

Output

For each test case, print n distinct integers p1,p2,…,pn — a permutation that there is no index i (1≤i≤n) such that pi=i (so, for all i 
from 1 to n the condition pi≠i should be satisfied).

If there are several answers, you can print any. It can be proven that the answer exists for each n>1.

INPUT

2
2
5

OUTPUT

2 1
2 1 5 3 4
*/

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
	ll i,n,m,rem,count=0,sum=0,reqSum,fi,si,ansi,ansj;
	cin>>n;
	cout<<n<<" ";
	dfo(1,n,1)
	{
		cout<<i<<" ";
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
