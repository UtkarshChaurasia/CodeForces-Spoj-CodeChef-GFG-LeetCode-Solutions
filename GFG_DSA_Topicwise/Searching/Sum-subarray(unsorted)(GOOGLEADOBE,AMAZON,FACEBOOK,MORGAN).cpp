/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.

Your Task:
The task is to complete the function subarraySum() which returns starting and ending positions(1 indexing) of first such occurring subarray from the left if sum equals to subarray, else -1 is returned. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

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
	ll n,m,a,b,rem,count=0,sum=0,reqSum,fi,si;
	cin>>n>>reqSum;
	vl arr(n);
	bool find = false;
	int i,j=0;
	fo(i,n)
	{
	    cin>>arr[i];
	}
	fo(i,n)
	{
	    
	    if(sum+arr[i]<=reqSum)
	    {
	        sum +=arr[i];
	    }
	    else
	    {
	        sum += arr[i];
	        while(sum>reqSum)
	        {
	            sum -= arr[j];
	            j++;
	        }
	    }
	    if(sum==reqSum)
	    {
	        cout<<j+1<<" "<<i+1<<endl;
	        find = true;
	        break;
	    }
	    
	}
	if(find==false)
	{
	    cout<<"-1"<<endl;
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
