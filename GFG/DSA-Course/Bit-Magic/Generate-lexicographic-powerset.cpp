#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;


void func(string s,vector<string>&str,int n,int pow_set)
{
    int i,j;
    fo(i,pow_set)
    {   
        string x;
        fo(j,n)
        {
            if(i & 1<<j)
            {
                 x=x+s[j];
            }
        }
        if(i!=0)
        str.push_back(x);
        
    }
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    string s;
	    vector<string> str;
	    cin>>s;
	    int pow_set=pow(2,n);
	    func(s,str, n, pow_set);
	    sort(str.begin(),str.end());
	    fo(i,str.size())
	    cout<<str[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
