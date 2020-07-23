/*Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contigious subarray sum.

Input:
First line of input contains a single integer T which denotes the number of test cases. First line of each test case contains a single integer
 N which denotes the total number of elements. Second line of each test case contains N space separated integers denoting the elements of the array.

Output:
For each test case print the maximum sum obtained by adding the consecutive elements.

Constraints:
1 <= T <= 101
1 <= N <= 106
-106 <= Arr[i] <= 106

Example:
Input:
3
7
8 -8 9 -9 10 -11 12
8
10 -3 -4 7 6 5 -4 -1
8
-1 40 -14 7 6 5 -4 -1

Output:
22
23
52

Explanation:
Testcase 1: Starting from last element of the array, i.e, 12, and moving in circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, 
which gives maximum sum as 22.


OPTIMIZED
Time : O(N)
Space: O(1)



APPROACH:

1. Maximum subarray sum will be maximum of normal subarray sum and circular subarray sum.
2. Maximum subarray sum can be find using KADANES Algo and store it in normal_max_sum.
3. To find maximum circular subrray sum, reverse the sign of elements and find the maximum normal subarray sum using KADANES Algo
   and subtract it from total sum. Store it in circular_max-sum.
4. Now find the maximum of normal_max_sum and circular_max_sum.

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


// function to calculate max sum of subarray
int normalSum(int arr[], int n)
{
    int i,curr_sum = arr[0], curr_max=arr[0];
    dfo(1,n,1)
    {
        curr_sum = max(arr[i], curr_sum+arr[i]);
        curr_max = max(curr_max, curr_sum);
    }
    return curr_max;
}

void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0,res;
	cin>>n;
	int arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	int normal_max_sum = normalSum(arr, n);
	if(normal_max_sum<0)
	{
	    cout<<normal_max_sum<<endl;
	}
	else
	{
	    //finding total sum and reversing the signs as well
	    int tot_sum = 0, circular_max_sum;
	    fo(i,n)
	    {
	        tot_sum += arr[i];
	        arr[i] = -arr[i]; //reversing sign of elements
	    }
	    circular_max_sum = tot_sum + (normalSum(arr,n)); //calculating maximum circular subarray sum
	    res = max(normal_max_sum, circular_max_sum);
	    cout<<res<<endl;
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