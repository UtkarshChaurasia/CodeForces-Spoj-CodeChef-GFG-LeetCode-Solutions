/*
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input: 
First line contains number of test cases T. First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".

Constraints:
1 <= T <= 100
2 <= N <= 103
0 <= Ai <= 104

Example
Input:
3
7
100 180 260 310 40 535 695
4
100 50 30 20
10
23 13 25 29 33 19 34 45 65 67

Output:
(0 3) (4 6)
No Profit
(1 4) (5 9) 

OPTIMIZED:

Time: O(N)
Space: O(1)
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
	int sell = 0;
	int buy = 0;
	fo(i,n-1)
	{
	    if((arr[i]<=arr[i+1]) && i!=(n-2))
	    {
	        //sell = arr[i+1];
	        sell = i+1;
	    }
	    else if((arr[i]<=arr[i+1]) && i==(n-2))
	    {
	        //sell = arr[i+1];
	        //sum = sum + (sell-buy);
	        sell = i+1;
	        if(sell!=buy){
	        cout<<"("<<buy<<" "<<sell<<") ";
	        count++;
	        }
	    }
	    else if(arr[i]>arr[i+1])
	    {
	        //sum = sum + (sell-buy);
	        if(sell!=buy){
	        cout<<"("<<buy<<" "<<sell<<") ";
	        count++;
	        }
	        //sell = arr[i+1];
	        //buy = arr[i+1];
	        sell = i+1;
	        buy = i+1;
	        
	    }
	}
	if(count==0)
	{
	    cout<<"No Profit";
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
