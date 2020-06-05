#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    long int n,val,sum=0;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i)
    { 
        cin>>val;
        v.push_back(val);
        sum+=val;
    }
    ll small_index,ans=1000000001;
    bool yes=0;

    for(int i=v.size()-1;i>=0;--i)
    //for(int i=0;i<v.size();i++)
    
    {
        if((sum-v[i]) % 7==0)
        {
            if(v[i]<=ans)
            {
                small_index=i;
                ans=v[i];
                yes=1;
            }

        }

    }
    if(yes) cout<<small_index;

    else cout<<"-1";

    return 0;
}
