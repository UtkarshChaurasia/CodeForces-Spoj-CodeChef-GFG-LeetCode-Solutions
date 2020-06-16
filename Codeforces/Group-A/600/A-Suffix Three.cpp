#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	string str;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>str;
		int l=str.length();
		if(str.substr(l-2,2)=="po")
		{
			cout<<"FILIPINO"<<endl;
		}
		else if((str.substr(l-4,4)=="desu")||(str.substr(l-4,4)=="masu"))
		{
			cout<<"JAPANESE"<<endl;
		}
		else if(str.substr(l-5,5)=="mnida")
		{
			cout<<"KOREAN"<<endl;
		}
		str="";
		l=0;
	}
	return 0;
}
