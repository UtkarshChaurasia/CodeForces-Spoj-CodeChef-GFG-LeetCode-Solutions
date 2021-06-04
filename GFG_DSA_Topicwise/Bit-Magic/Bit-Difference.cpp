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
	    while(XOR!=0)
	    {
	        if(XOR & 1)
	        {
	            count++;
	        }
	        XOR = XOR>>1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
