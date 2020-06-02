#include <iostream>
using namespace std;
int main()
{
	int r,n,t,a,b;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cin>>a>>b;
		r=a%b;
		if(r==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			int ans=((b-r)+a)-a;
		    cout<<ans<<endl;
		}
	}
	return 0;
}
