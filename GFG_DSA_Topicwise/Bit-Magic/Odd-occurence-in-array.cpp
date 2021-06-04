#include<iostream>
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
 {
	int t,i;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int res=0;
	    fo(i,n)
	    {
	        cin>>a[i];
	        res = res^a[i];
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
}
