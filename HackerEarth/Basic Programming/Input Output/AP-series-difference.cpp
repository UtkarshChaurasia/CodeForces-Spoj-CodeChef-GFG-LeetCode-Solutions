#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        ll ans;
        cin>>a>>b>>c;
        ans=abs((2*b-(a+c)));
        ans = (ans+1)/2;
        cout<<ans<<endl;
    }
}
