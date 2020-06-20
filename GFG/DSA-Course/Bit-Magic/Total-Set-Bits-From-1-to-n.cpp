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
	    int n,i,count = 0;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    {
	        int num = i;
	        while(num!=0)
	        {
	            num = num & (num-1);
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
