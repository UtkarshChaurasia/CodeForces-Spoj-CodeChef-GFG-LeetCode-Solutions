#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
int n,count1=1,max=0,min=11;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);

{
for(int i=0;i<n-1;i++)
{
    if((a[i+1]-a[i])<3)
    {
        count1++;
        
        
    }
    else
    {
        if(min>count1)
        min=count1;
        
        
        if(max<count1)
        max=count1;
        count1=1;
    }
}

if(min>count1)
        min=count1;
        
        
        if(max<count1)
        max=count1;
        count1=1;

cout<<min<<" "<<max<<"\n";
}


}
	return 0;
}
