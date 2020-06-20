#include<iostream>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,LS1,count=0;
	    cin>>n;
	    while(n!=0)
	    {
	        LS1 = n>>1;
	        if((LS1%2!=0) && (n%2!=0))
	        {
	            count++;
	            break;
	        }
	        else
	        {
	            n = LS1;
	            LS1 = LS1>>1;
	        }
	    }
	    if(count!=0)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
