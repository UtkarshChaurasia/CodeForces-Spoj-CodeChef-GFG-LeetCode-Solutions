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
	    int n,count=0,reduced;
	    cin>>n;
	    reduced = n & (~(n-1));
	    while(reduced!=0)
	    {
	        count++;
	        reduced = reduced>>1;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
