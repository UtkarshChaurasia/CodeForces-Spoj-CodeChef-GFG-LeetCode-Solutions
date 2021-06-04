#include<iostream>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,count=0;
	    cin>>n;
	    cin>>k;
	    n = n>>k;
	    if(n&1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
