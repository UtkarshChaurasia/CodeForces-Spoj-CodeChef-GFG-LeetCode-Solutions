#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
	int n,a[1000],width=0,h;
	cin>>n>>h;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<=h)
		{
			width+=1;
		}
		else{
			width+=2;
		}
	}
	cout<<width;
    return 0;
}
