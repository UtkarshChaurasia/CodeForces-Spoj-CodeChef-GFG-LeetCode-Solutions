/*
Given a binary array, we need to convert this array into an array that either contains all 1s or all 0s.  We need to do it using the minimum number of group flips. 

Examples : 

    Input : arr[] = {1, 1, 0, 0, 0, 1}
    Output :  From 2 to 4
    Explanation : We have two choices, we make all 0s or do all 1s.  We need to do two group flips to make all elements 0 and one group flip to make all elements 1.  Since making all elements 1 takes least group flips, we do this.

    Input : arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1}
    Output :  
    From 1 to 3
    From 5 to 6
    From 8 to 8

    Input : arr[] = {0, 0, 0}
    Output :  
    Explanation : Output is empty, we need not to make any change

    OPTIMIZED
    Time : O(N)
    Space : O(1)


    APPROACH:

    1. The array is binary so the maximum difference between number of groups of 1 and 0
    2. If starting and element is same then there are equal number of 1's group and 0'group
    3. With these facts we can say that the second group in array is the group which we need to flip.
    4. Starting from arr[1], check if current element is not equal to previous element, i.e. either required group has started or ended.
    5. To decide whether group is started or ended, check if current element is equal to 1st element that means required group is ended, else started.

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
	int i,j,n,m,a,b,rem,count=0,sum=0,to_be_flipped,start,end=0;
	cin>>n;
	int arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	dfo(1,n,1)
	{
	    if(arr[i]!=arr[i-1])
	    {
	        if(arr[i]!=arr[0])
	        {
	            cout<<"From "<<i<<"to ";
	        }
	        else
	        {
	            cout<<(i-1)<<endl;
	        }
	    }
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

