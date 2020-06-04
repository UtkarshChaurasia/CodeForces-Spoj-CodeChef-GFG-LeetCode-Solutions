#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int cost[100],n,t,i,j,s,left,cat[100],fwd[100],mindef=1000,minfwd=1000;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    	cin>>n>>s;
    	left=100-s;
    	for(i=0;i<n;i++)
    	{
    		cin>>cost[i];
		}
		for(i=0;i<n;i++)
    	{
    		cin>>cat[i];
		}
		for(i=0;i<n;i++)
		{
			if(cat[i]==1)
			{
				if(cost[i]<minfwd)
				{
					minfwd=cost[i];
				}
			}
			else
			{
				if(cost[i]<mindef)
				{
					mindef=cost[i];
				}
			}
		}
		if((mindef+minfwd)<=left)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
		mindef=1000;
		minfwd=1000;
	}
    return 0;
}
