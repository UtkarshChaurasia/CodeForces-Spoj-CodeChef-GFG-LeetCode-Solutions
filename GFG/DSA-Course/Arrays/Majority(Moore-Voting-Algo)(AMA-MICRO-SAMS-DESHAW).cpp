/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 
times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be 
the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 107
0 <= Ai <= 106

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

OPTIMIZED

Time O(N)
Space O(1)

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
	int i,j,n,m,a,b,rem,count=1,sum=0,ind = 0;
	cin>>n;
	int arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	int majority = arr[0];
	dfo(1,n,1)
	{
	    if(arr[i]==majority)
	    {
	        count++;
	    }
	    else
	    {
	        count--;
	    }
	    if(count==0)
	    {
	        majority = arr[i];
	        count = 1;
	    }
	}
	count = 0;
	fo(i,n)
	{
	    if(arr[i] == majority)
	    {
	        count++;
	    }
	}
	if(count<=(n/2))
	{
	    cout<<"-1"<<endl;
	}
	else
	{
	    cout<<majority<<endl;
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
