#include <iostream>
using namespace std;
int main()
{
    int n,i,pos;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        pos=i%2;
        if(pos==1)
        {
            cout<<"I hate"<<" ";
        }
        else if(pos==0)
        {
            cout<<"I love"<<" ";
        }
        if(i!=n)
        {
            cout<<"that"<<" ";
        }
    }
    cout<<"it";
    return 0;
}
