#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,m,n) for(i=m;i<n;i++)
#define forev(i,n,m) for(i=n;i>m;i--)
#define si(x)  scanf("%d", &x)
#define sl(x)  scanf("%lld", &x)
#define ss(s)  sacnf("%s", s)
#define pi(x)  printf("%d\n", x)
#define pl(x)  printf("%lld\n", x)
#define ps(s)  printf("%s\n", s)
#define deb(x) cout<< #x << "=" << x << endl;
#define deb2(x, y) cout<< #x << "=" << x <<","<< #y << "=" << y <<endl;
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define find(x,n) binary_search(all(x), n)
#define pb push_back
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pii;
typedef pair<ll, ll>   pl; 
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

const int MOD = 1000000007;   //(10^9 + 7)



void solve()
{
	ll i,j,n,m,a,q,rem,count=0,sum=0;
	cin>>n>>q;
	ll h[n];
	ll t[n];
	fo(i,0,n)
	{
	    cin>>h[i];
	}
	fo(i,0,n)
	{
	    cin>>t[i];
	}
	fo(j,0,q) //enter queries
	{
	    ll total=0,qt,ub,uc,b,c,curr=0;
	    cin>>qt>>ub>>uc;
	    b = ub-1;
	    c = uc-1;
	    //deb(h[b])
	    //deb(h[c])
	    if(qt==1) //query1
	    {
	        t[b] = c+1;
	    }
	    else  //query2
	    {
	        if(h[b]<h[c])     //if height of source is less than destination
	        {
	            cout<<-1<<endl; 
	        }
	        else
	        {
	            if(b>c)  //if b>c
	            {
	                //curr = h[c];
	                fo(i,c,b) //going reverse from destination to source
	                {
	                    if(h[i]>=h[b]) //if any height is greater than source height
	                    {
	                        
	                        total = -1;
	                        break;
	                    }
	                    else if(h[i]>curr && h[i]<h[b])
	                    {
	                        curr = h[i];
	                        total = total + t[i];
	                        //deb(total);
	                    }
	                }
	                if(total!=-1 && (curr<h[b]))
	                {
	                    cout<<total+t[b]<<endl;
	                }
	                else
	                {
	                    cout<<-1<<endl;
	                }
	                total = 0;
	                curr = 0;
	            }
	            else if(b<c)
	            {
	                //curr = h[c];
	                for(i=c;i>b;i--) //going reverse from destination to source
	                {
	                    if(h[i]>=h[b]) //if any height is greater than source height
	                    {
	                        total = -1;
	                        break;
	                    }
	                    else if(h[i]>curr && h[i]<h[b])
	                    {
	                        curr = h[i];
	                        total = total + t[i];
	                    }
	                }
	                if(total!=-1 && (curr<h[b]))
	                {
	                    cout<<total+t[b]<<endl;
	                }
	                else
	                {
	                    cout<<-1<<endl;
	                }
	                
	            }
	            else if(b==c)
	            {
	                cout<<t[b]<<endl;
	            }
	        }
	    }
	}
}





int mpow(int base, int exp)
{
	base %= MOD;
	int result = 1;
	while(exp>0)
	{
		if(exp & 1)
		{
			result = ((ll)result*base);
		}
		
		base = ((ll)base*base) % MOD;
		exp >>= 1;
	}
	
	return result;
}




int main()
{
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}
