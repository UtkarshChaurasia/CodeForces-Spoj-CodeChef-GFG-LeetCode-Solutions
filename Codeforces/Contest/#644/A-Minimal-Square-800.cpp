#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,big,small,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==b)
		{
			cout<<a*b*4<<endl;
		}
		else
		{
			if(a>b)
			{
				big=a;
				small=b;
			}
			else
			{
				big=b;
				small=a;
			}
			if((2*small)>big)
			{
				cout<<pow((2*small),2)<<endl;
			}
			else if((2*small)<=big)
			{
				cout<<pow(big,2)<<endl;
			}
		}
	}
}
