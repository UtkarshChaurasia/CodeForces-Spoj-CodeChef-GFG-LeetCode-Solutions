#include <iostream>
using namespace std;
int main()
{
    int a[4],i,big=0;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==big)
        {
            continue;
        }
        cout<<big-a[i]<<" ";
    }
    return 0;
}
