#include <iostream>
using namespace std;
 
int main()
{
    int n, i;
    float num[100], max=0, average,sum=0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> num[i];
        if(num[i]>max)
        {
        	max=num[i];
		}
    }
    for(i = 0; i < n; i++)
    {
		sum=sum+(max-num[i]);
    }
    cout<<fixed<<int(sum);
 
 
    return 0;
}
