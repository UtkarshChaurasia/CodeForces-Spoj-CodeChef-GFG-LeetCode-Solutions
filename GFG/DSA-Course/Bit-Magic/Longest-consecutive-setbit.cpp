#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,LS,count=0;
	    vector<int> arr;
	    cin>>n;
	    LS = n>>1;
	    while(n!=0)
	    {
	    
	    
	    if((n%2!=0) && (LS%2!=0))
	    {
	        count++;
	        n = LS;
	        LS =LS>>1;
	    }
	    else
	    {
	        n = LS;
	        LS =LS>>1;
	        arr.push_back(count);
	        count=0;
	    }
	    }
	    sort(arr.begin(),arr.end(),greater<int>());
	    cout<<arr[0]+1<<endl;
	}
	return 0;
}
