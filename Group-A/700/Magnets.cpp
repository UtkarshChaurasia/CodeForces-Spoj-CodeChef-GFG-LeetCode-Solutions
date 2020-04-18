#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
	int n,a[100000],width=0,h;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			width+=1;
		}
	}
	cout<<width;
    return 0;
}
