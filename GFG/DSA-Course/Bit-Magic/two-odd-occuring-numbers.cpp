#include<iostream>
#define ll long long
using namespace std;
int main()
 {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,XOR=0,res1=0,res2=0,big,small;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        XOR = XOR^arr[i];
	    }
	    int sn = XOR & ~(XOR-1);
	    for(i=0;i<n;i++)
	    {
	        if((arr[i] & sn)!=0)
	        {
	            res1 = res1^arr[i];
	        }
	        else
	        {
	            res2 = res2^arr[i];
	        }
	    }
	    if(res1>res2)
	    {
	        big=res1;
	        small=res2;
	    }
	    else
	    {
	        big=res2;
	        small=res1;
	    }
	    cout<<big<<" "<<small<<endl;
	}
	return 0;
}
