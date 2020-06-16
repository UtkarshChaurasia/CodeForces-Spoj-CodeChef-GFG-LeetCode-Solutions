#include <iostream>
using namespace std;
int main()
{
	int x,n,i;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		if(x%10==0)
		{
			x=x/10;
		}
		else
		{
		    x=x-1;
		}
	}
	cout<<x;
	return 0;
}
