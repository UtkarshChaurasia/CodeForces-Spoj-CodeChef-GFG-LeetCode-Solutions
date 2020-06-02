#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
	int l,counta=0,countb=0;
	string str;
	cin>>l;
	cin>>str;
	for(int i=0;i<l;i++)
	{
		if(str[i]=='A')
		{
			counta++;
		}
	}
	if(counta>(l-counta))
	{
		cout<<"Anton";
	}
	else if(counta<(l-counta))
	{
		cout<<"Danik";
	}
	else
	{
		cout<<"Friendship";
	}
    return 0;
}
