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
	    int n,count=0;
	    cin>>n;
	    if((n&(n-1))==0)
	    {
	        while(n!=0)
	        {
	            count++;
	            n = n>>1;
	        }
	        cout<<count<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
