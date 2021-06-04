#include<iostream>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll a;
	    ll b;
	    ll res;
	    res=1;
	    cin>>a>>b;
	    while(b>0)
	    {
	        if(b & 1)
	        {
	            res = (res*a)%(1000000007);
	        }
	        a = (a*a)%(1000000007);
	        b = b>>1;
	    }
	    cout<<res<<endl;
	}
	
	return 0;
}
