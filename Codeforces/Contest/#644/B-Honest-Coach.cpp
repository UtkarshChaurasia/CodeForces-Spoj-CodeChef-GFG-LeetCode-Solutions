#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>a[i];
		}
		sort(a, a+n); 
  
   // Initialize difference as infinite 
   		int diff = INT_MAX; 
  
   // Find the min diff by comparing adjacent 
   // pairs in sorted array 
   		for (int i=0; i<n-1; i++) 
      		if (a[i+1] - a[i] < diff) /*&& (a[i+1]!=a[i])) */
          		diff = a[i+1] - a[i];
        cout<<diff<<endl;
	}
}
