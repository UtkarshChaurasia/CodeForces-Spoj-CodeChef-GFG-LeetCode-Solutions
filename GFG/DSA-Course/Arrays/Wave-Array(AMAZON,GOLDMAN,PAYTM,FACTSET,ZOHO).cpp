/*
Given a sorted array arr[] of non-repeating integers without duplicates. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Input:
The first line contains an integer T, depicting total number of test cases. T testcases follow. The first line of each testcase contains an integer N depicting the size of the array. The second line contains N space separated elements of the array.

Output:
For each testcase, in a new line, print the array into wave-like array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
0 ≤ A[i] ≤107

Example:
Input:
1
5
1 2 3 4 5
Output:
2 1 4 3 5

Explanation:
Testcase 1: Array elements after sorting it in wave form are 2 1 4 3 5.


OPTIMIZED 

TIME: O(N)
SPACE: O(1)
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n;i>0;i--)
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
	int i,j,n,m,a,b,rem,count=0,sum=0;
	cin>>n;
	vi arr(n);
	fo(i,n)
	{
	    cin>>arr[i];
	}
	fo(i,(n-1))
	{
	    swap(arr[i],arr[i+1]);
	    i++;
	}
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
