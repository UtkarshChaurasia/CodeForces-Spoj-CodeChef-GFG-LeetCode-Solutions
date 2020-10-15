/*Given a matrix mat[][] of size N x N. The task is to print the elements of the matrix in the snake pattern.


Input:
First line consists of an integer T denoting the number of test cases. First line of each test case consists of N, denoting number of 
elements(N x N) in Matrix.Second line of every test case consists of N x N spaced integers denoting elements of Matrix elements.

Output:
For each testcase, in a new line, print the matrix in snake pattern.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= mat[i][j] <= 100

Example:
Input:
2
3
45 48 54 21 89 87 70 78 15
2
25 27 23 21

Output:
45 48 54 87 89 21 70 78 15
25 27 21 23

Explanation:
Testcase 1: Matrix is as below:
45 48 54
21 89 87
70 78 15

Printing it in snake pattern will lead to the output as 45 48 54 87 89 21 70 78 15.
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
    cin>>n;
    int arr[n][n];
    fo(i,n)
    {
        fo2(j,n)
        {
            cin>>arr[i][j];
        }
    }
    bool isReverse = false;
    fo(i,n)
    {
        fo2(j,n)
        {
            if(isReverse == true)
            {
                cout<<arr[i][n-j-1]<<" ";
                if(j==(n-1))
                {
                    isReverse = false;
                }
            }
            else if(isReverse == false)
            {
                cout<<arr[i][j]<<" ";
                if(j==(n-1))
                {
                    isReverse = true;
                }
            }
        }
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
