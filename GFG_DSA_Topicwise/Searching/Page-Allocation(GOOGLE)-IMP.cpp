/*
You are given N number of books. Every ith book has Ai number of pages. 
You have to allocate books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value. 

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output: 113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.

Example 2:

Input:
N = 3
A[] = {15,17,20}
M = 2
Output: 32
Explanation: Allocation is done as 
{15,17} and {20}

Your Task:
Complete findPages() function that takes a, n, and m as arguments and returns the expected answer.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(1)

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
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


bool isPossible(int arr[], int n, int m, lli currmin)
{
    lli sum = 0;
    lli students = 1;
    int i;
    fo(i,n)
    {
        if(arr[i]>currmin)
        {
            return false;
        }
        if(sum+arr[i]>currmin)
        {
            
            sum = arr[i];
            students++;
            if(students>m)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    return true;
}



int pageAllocation(int arr[], int n, int m)
{
    lli sum = 0;
    int i;
    if(n<m)
    {
        return -1;
    }
    
    fo(i,n)
    {
        sum += arr[i];
    }
    
    lli low = 0;
    lli high = sum;
    lli ans = int(1e15);
    
    while(low<=high)
    {
        lli mid = (low+high)/2;
        if(isPossible(arr,n,m,mid)==true)
        {
            ans = ans<mid?ans:mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return ans;
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
	cin>>m;
	
	cout<<pageAllocation(arr,n,m)<<endl;
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
