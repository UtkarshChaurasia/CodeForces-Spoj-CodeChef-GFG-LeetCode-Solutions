#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    string S[22],T[22];
    int n,m,q,y;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
	{
    	cin>>S[i];
	}
    for(int i=1;i<=m;++i)
	{
    	cin>>T[i];
	}
    cin>>q;
    while(q--)
	{
        cin>>y;
        int s=y%n,t=y%m;
        if(s==0)
		{
			s=n;	
		}
        if(t==0)
		{
        	t=m;	
		}
        cout<<S[s]<<T[t]<<endl;
    }
    return 0;
}
