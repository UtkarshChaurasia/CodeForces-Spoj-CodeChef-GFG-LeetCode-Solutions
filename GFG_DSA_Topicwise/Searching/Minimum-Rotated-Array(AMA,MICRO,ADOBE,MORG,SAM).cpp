/*
Given an array of distinct elements which was initially sorted. This array is rotated at some unknown point. The task is to find the minimum element in the given sorted and rotated array. 

Example 1:

Input:
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1
Explanation: The array is rotated 
once anti-clockwise. So minium 
element is at last index (n-1) 
which is 1.

Example 2:

Input:
N = 5
arr[] = {3,4,5,1,2}
Output: 1
Explanation: The array is rotated 
and the minimum element present is
at index (n-2) which is 1.

Your Task:
The task is to complete the function minNumber() which takes the array arr[] and its starting and ending indices (low and high) as inputs and returns the minimum element in the given sorted and rotated array.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(LogN).
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

int findMin(int arr[], int low, int high)
{
    // This condition is needed to  
    // handle the case when array is not  
    // rotated at all  
    if (high < low) return arr[0];  
  
    // If there is only one element left  
    if (high == low) return arr[low];  
  
    // Find mid  
    int mid = (low + high)/2;
  
    // Check if element (mid+1) is minimum element. Consider  
    // the cases like {3, 4, 5, 1, 2}  
    if (arr[mid + 1] < arr[mid])  
    return arr[mid + 1];  
  
    // Check if mid itself is minimum element  
    if (arr[mid] < arr[mid - 1])  
    return arr[mid];  
  
    // Decide whether we need to go to left half or right half  
    if (arr[high] > arr[mid])  
    return findMin(arr, low, mid - 1);  
    return findMin(arr, mid + 1, high);
}


void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0;
	cin>>n;
	int arr[n];
	fo(i,n)
	{
	    cin>>arr[i];
	}
	cout<<findMin(arr,0,n-1)<<endl;
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
