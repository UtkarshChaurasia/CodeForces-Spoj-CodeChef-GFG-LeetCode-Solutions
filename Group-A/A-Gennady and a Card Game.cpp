#include <iostream>
using namespace std;
int main()
{
    int count=0,i;
    string s1,s;
    cin>>s;
    for(i=0;i<5;i++)
    {
        cin>>s1;
        if((s[0]==s1[0])||(s[1]==s1[1]))
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
