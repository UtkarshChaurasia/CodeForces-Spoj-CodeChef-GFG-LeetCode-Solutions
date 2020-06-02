#include <iostream>
using namespace std;
 
int main()
{
    int n, i;
    float num[100], sum=0, average;
    cin >> n;
    for(i = 0; i < n; ++i)
    {
        cin >> num[i];
        sum += num[i];
    }
 
    average = sum / n;
    cout<< average;
 
    return 0;
}
