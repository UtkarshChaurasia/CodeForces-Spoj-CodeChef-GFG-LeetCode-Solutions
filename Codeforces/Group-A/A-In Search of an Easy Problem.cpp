#include <iostream>
using namespace std;
int main()
{
    int n,a[100000],temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
        temp=1;
        break;}
    }
    if(temp==1)
    {
        cout<<"Hard";
    }
    else{
        cout<<"Easy";
    }
    return 0;
}
