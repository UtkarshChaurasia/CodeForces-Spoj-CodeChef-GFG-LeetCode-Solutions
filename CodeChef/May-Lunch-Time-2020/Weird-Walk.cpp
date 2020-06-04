#include<iostream>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		lli suma=0,sumb=0,weird=0;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<=n-1;i++)
		{
			suma=suma+a[i];
			sumb=sumb+b[i];
			if(a[i]==b[i] && (i==0))
			{
				weird+=a[0];
				//cout<<a[i]<<endl;
				
			}
			if((suma==sumb) && (a[i+1]==b[i+1]))
			{
				weird = weird+a[i+1];
				//cout<<a[i]<<endl;
			}
		}
		cout<<weird<<endl;
	}
}
