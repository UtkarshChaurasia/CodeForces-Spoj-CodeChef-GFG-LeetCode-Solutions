/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays in place, i. e., we need to consider all n + m elements in sorted order, then we need to put first n elements of these sorted in first array and remaining m elements in second array.

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as follows.

Example 1:

Input: 
N = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation: After merging the two non-decreasing 
arrays, we have, 0 1 2 3 5 6 7 8 9.

Example 2:

Input: 
N = 2, arr1[] = [10, 12] 
M = 3, arr2[] = [5 18 20]
Output: 
arr1[] = [5 10]
arr2[] = [12 18 20]
Explanation: After merging two sorted arrays 
we have 5 10 12 18 20.

EXPECTED TIME: O(N+M)
EXPECTED SPACE: O(1)

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
	cin>>n>>m;
	vi arr1(n);
	vi arr2(m);
	fo(i,n)
	{
	    cin>>arr1[i];
	}
	fo(i,m)
	{
	    cin>>arr2[i];
	}
	i=0;
	j=0;
	while(i<n && j<m)
	{
	    if(arr1[i]<arr2[j])
	    {
	        cout<<arr1[i++]<<" ";
	        
	    }
	    else
	    {
	        cout<<arr2[j++]<<" ";
	        
	    }
	}
	while(i<n)
	{
	    cout<<arr1[i++]<<" ";
	}
	while(j<m)
	{
	    cout<<arr2[j++]<<" ";
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
