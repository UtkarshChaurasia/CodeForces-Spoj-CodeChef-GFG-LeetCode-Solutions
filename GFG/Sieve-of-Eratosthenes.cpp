#include<iostream>
#define ll long long
using namespace std;


void seive(int n)
{
    int prime[n+1]={0};
    
    for (int i = 3; i <= n; i += 2) {
		prime[i] = 1;
	}
    for(ll p=3;p<=n;p+=2)
    {
        if(prime[p]==1)
        {
            for(ll j=p*p;j<=n;j+=p)
            {
                prime[j]=0;
            }
        }
    }
    prime[2]=1;
    prime[0]=prime[1]=0;
    for(int p=0;p<=n;p++)
    {
        if(prime[p]==1)
        {
        cout<<p<<" ";
        }
    }
    
}


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    seive(n);
	    cout<<endl;
	}
	return 0;
}
