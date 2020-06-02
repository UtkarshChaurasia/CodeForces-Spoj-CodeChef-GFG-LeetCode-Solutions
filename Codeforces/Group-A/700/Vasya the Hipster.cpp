#include <iostream>
using namespace std;
 
int main()
{
    int r,b,diff,same;
    cin>>r>>b;
    if(r>b)
    {
    	diff=b;
    	same=(r-b)/2;
	}
	else if(r<b)
	{
		diff=r;
		same=(b-r)/2;
	}
	else
	{
		diff=r;
		same=0;
	}
	cout<<diff<<" "<<same;
 
    return 0;
}
