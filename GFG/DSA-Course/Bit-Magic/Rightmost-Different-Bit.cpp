#include<iostream>
#define ll long long
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,XOR,count=0;
	    cin>>a>>b;
	    XOR = a^b;
	    int sn = XOR & (~(XOR-1));
	    while(sn!=0)
	    {
	        count++;
	        sn =sn>>1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
