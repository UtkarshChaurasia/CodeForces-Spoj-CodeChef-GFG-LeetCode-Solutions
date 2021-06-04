/*
Given two arrays A and B of size N and M respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one 
occurrence of element should be printed in union.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consist of three lines. 
The first line of each test case contains two space separated integers N and M, where N is the size of array A and M is the size of array B. The second line of each test case contains N space separated integers denoting elements of array A. The third line of each test case contains M space separated integers denoting elements of array B.

Output:
Correspoding to each test case, print the count of union elements of the two arrays.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(N + M).

Constraints:
1 ≤ T ≤ 100
1 ≤ N, M ≤ 105
1 ≤ A[i], B[i] < 105

Example:
Input:
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2
Output:
5
7

Explanation:
Testcase 1: 1, 2, 3, 4 and 5 are the elements which comes in the union set of both arrays.
Testcase 2: 1 , 2 , 6 , 25 , 32 , 54 and 85 are the elements which comes in the union set of both arrays. 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(j,n) for(j=0;j<n;j++)
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
	set<int> st;
	fo(i,n)
	{
	    int ele;
	    cin>>ele;
	    st.insert(ele);
	}
	fo(i,m)
	{
	    int ele;
	    cin>>ele;
	    st.insert(ele);
	}
	cout<<st.size()<<endl;
	
	
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
