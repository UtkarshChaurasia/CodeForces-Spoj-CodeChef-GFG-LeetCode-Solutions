#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n, count=0,res=0;
	    cin>>n;
	    while(n!=0)
	    {
	        count++;
	        if(n&1!=0)
	        {
	            res = res + pow(2,(32-count));
	        }
	        n = n>>1;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
