#include <iostream>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    if(n==0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if((n&(n-1))==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;	    }
	}
	return 0;
}
