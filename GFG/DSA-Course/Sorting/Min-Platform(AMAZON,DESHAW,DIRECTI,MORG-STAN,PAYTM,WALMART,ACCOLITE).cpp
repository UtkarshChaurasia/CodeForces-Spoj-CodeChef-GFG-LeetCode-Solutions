/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms 
required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be 
same for a train, but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of
a train and arrival of another.
Example 1:
Input: N = 6 
arr[] = [0900  0940 0950  1100 1500 1800]
dep[] = [0910 1200 1120 1130 1900 2000]
Output: 3
Explanation: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.
Example 2:
Input: N = 3
arr[] = [0900 1100 1235]
dep[] = [1000 1200 1240] 
Output: 1
Explanation: Only 1 platform is required to 
safely manage the arrival and departure 
of all trains. 
Note: Time intervals are in the 24-hour format(hhmm),  of the for HHMM , where the first two characters represent hour (between 00 to 23 ) and 
the last two characters represent minutes (between 00 to 59).
Expected Time Complexity: O(nLogn).
Expected Auxiliary Space: O(n).
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
typedef pair<int, char> pic;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

const int MOD = 1000000007;   //(10^9 + 7)


bool customSort(pic a, pic b)
{
    if(a.F==b.F)
    {
        return a.S<b.S;
    }
    return a.F<b.F;
}


void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0;
	cin>>n;
	vi arr(n);
	vi dep(n);
	fo(i,n)
	{
	    cin>>arr[i];
	}
	fo(i,n)
	{
	    cin>>dep[i];
	}
	vector<pic> order;
	fo(i,n)
	{
	    order.pb(make_pair(arr[i],'a'));
	    order.pb(make_pair(dep[i],'d'));
	}
	sort(order.begin(),order.end(), customSort);
	int platform=0,res=1;
	fo(i,order.size())
	{
	    
	    if(order[i].S=='a')
	    {
	        platform++;
	    }
	    else
	    {
	        platform--;
	    }
	    res = max(res,platform);
	}
	cout<<res<<endl;
	
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
