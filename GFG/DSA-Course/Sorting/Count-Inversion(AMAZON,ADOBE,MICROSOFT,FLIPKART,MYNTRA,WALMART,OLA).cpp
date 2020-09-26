/*Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion 
count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second 
line of each test case contains N elements.

Output:
Print the inversion count of array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

Example:
Input:
1
5
2 4 1 3 5

Output:
3

Explanation:
Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

TIME COMPLEXITY: O(NlogN)
SPACE COMPLEXITY: O(N)

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



ll countMerge(ll arr[], ll l, ll m, ll r)
{
    ll n1 = m-l+1;
    ll n2 = r-m;
    ll left[n1]; ll right[n2];
    ll i;
    fo(i,n1)
    {
        left[i] = arr[l+i];
    }
    fo(i,n2)
    {
        right[i] = arr[m+1+i];
    }
    ll j=0,k=l,res = 0;
    i = 0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else if(left[i]>right[j])
        {
            arr[k] = right[j];
            res += (n1-i);
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return res;
}




ll countInv(ll arr[], ll l, ll r)
{
    ll res = 0;
    if(l<r)
    {
        ll m = l+(r-l)/2;
        res += countInv(arr,l,m);
        res += countInv(arr, m+1, r);
        res += countMerge(arr,l,m,r);
    }
    return res;
}





void solve()
{
	ll i,j,n,m,a,b,rem,count=0,sum=0;
	cin>>n;
	ll arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	cout<<countInv(arr, 0, n-1)<<endl;
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
