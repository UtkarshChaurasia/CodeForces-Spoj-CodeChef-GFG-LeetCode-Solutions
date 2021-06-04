#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int D = pow(b,2)-(a*4*c);
	    if(a==0)
	    {
	        cout<<"Invalid"<<endl;
	    }
	    else if(D<0)
	    {
	        cout<<"Imaginary"<<endl;
	    }
	    else
	    {
	        int x1 = floor((-b+sqrt(D))/(2*a));
	        int x2 = floor((-b-sqrt(D))/(2*a));
	        cout<<x1<<" "<<x2<<endl;
	    }
	}
	return 0;
}
