#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,sum=0,tot;
		int a[5];
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		cin>>p;
		for(int i=0;i<5;i++)
		{
			a[i]=a[i]*p;
			sum=sum+a[i];
		}
		tot = 24*5;
		if(sum<=tot)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}
