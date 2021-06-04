/*
You are given two arrays A and B each containing N numbers. You need to choose exactly one number from A and exactly one number from B such that the index of the two chosen numbers is not same and the sum of the 2 chosen values is minimum. Formally, if you chose ith element from A whose value is x and jth element from B whose value is y, you need to minimize the value of (x+y) such that i is not equal to j.
Your objective is to find this minimum value.
 

Input:
The first line of input contains an integer denoting the test cases,t. The first line of each test case contains an integer N denoting the size of two arrays. Then each of the next two lines contains N space separated integers denoting values of the array A[] and B[] respectively.
 

Output:
Print the minimum sum which can be obtained under the conditions mentioned in the problem statement.If not possible print "-1" without quotes.
 

Constraints:
1<=T<=30
1<= N <=100000
1< =Array elements < =100000

Example:
Input:
1
5
5 4 3 2 1
1 2 3 4 5
Output:
2
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


bool comp(pair<int, int>a, pair<int , int>b)
{
    return a.F>b.F;
}


void solve()
{
	int i,j,n,m,rem,count=0,sum=0;
	cin>>n;
	vector<pair<int, int>> a(n),b(n);
	
    
	fo(i,n)
	{
	    cin>>a[i].F;
	    a[i].S = i;
	}
	fo(i,n)
	{
	    cin>>b[i].F;
	    b[i].S = i;
	}
	if(n==1)
    {
        cout<<-1<<endl;
    }
    else{
	sort(a.begin(), a.end(), comp);
	sort(b.begin(), b.end(), comp);
	
	if(a[n-1].second!=b[n-1].second)
	{
	    cout<<a[n-1].F+b[n-1].F<<endl;
	}
	else
	{
	    int x = a[n-1].F+b[n-2].F;
	    int y = a[n-2].F+b[n-1].F;
	    int ans = min(x,y);
	    cout<<ans<<endl;
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
