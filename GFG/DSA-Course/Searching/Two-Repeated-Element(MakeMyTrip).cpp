/*
You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Example 1:

Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array, 
1 and 3 are repeated two times.

Example 2:

Input:
N = 2
array[] = {1,2,2,1}
Output: 2 1
Explanation: In the given array,
1 and 2 are repeated two times 
and second occurence of 2 comes 
before 1. So the output is 2 1.

Your Task:
The task is to complete the function repeatedElements() which takes array arr[] and an integer N as inputs (the size of the array is N + 2 and elements are in range[1, N]) and finds the two repeated element in the array and return them in a pair.

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
	int i,j,n,m,a,b,rem,count=0,sum=0,ans1=0,ans2=0,ansi1,ansi2;
	cin>>m;
	n=m+2;
	vi arr(n);
	fo(i,n)
	{
	    cin>>arr[i];
	}
	int maxi = *max_element(arr.begin(),arr.end());
	fo(i,n)
	{
	    arr[i]--;
	}
	/*fo(i,n)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;*/
	fo(i,n)
	{
	    arr[arr[i]%maxi] = arr[arr[i]%maxi] + maxi;
	}
	fo(i,n)
	{
	    if(arr[i]/maxi==2)
	    {
	        if(ans1==0)
	        {
	            ans1 = i+1;
	        }
	        else
	        {
	            ans2 = i+1;
	        }
	    }
	}
	
	fo(i,n)
	{
	    arr[i] = (arr[i]%maxi)+1;
	}
	fo(i,n)
	{
	   if(arr[i]==ans1)
	   {
	       ansi1 = i;
	   }
	   else if(arr[i] ==ans2)
	   {
	       ansi2 = i;
	   }
	}
	if(ansi1>ansi2)
	{
	    cout<<ans2<<" "<<ans1<<endl;
	}
	else if(ansi1<ansi2)
	{
	    cout<<ans1<<" "<<ans2<<endl;
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
