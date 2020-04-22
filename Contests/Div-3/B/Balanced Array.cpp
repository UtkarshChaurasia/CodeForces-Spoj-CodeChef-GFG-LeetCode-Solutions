#include <iostream>
using namespace std;
int main()
{
	int arr[100000],n,count=0,i,k,t,sum=0;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n;
		if(n%4!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			for(i=2;i<=n;i+=2)
			{
				cout<<i<<" ";
				sum+=i;
			}
			for(i=1;i<n-1;i+=2)
			{
				cout<<i<<" ";
				sum-=i;
			}
			cout<<sum;
			sum=0;
		}
	}
	return 0;
}
