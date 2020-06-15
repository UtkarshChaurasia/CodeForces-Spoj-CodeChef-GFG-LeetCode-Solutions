#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define forev(i,n) for(i=n;i>0;i--)
#define si(x)  scanf("%d", &x)
#define sl(x)  scanf("%lld", &x)
#define ss(s)  sacnf("%s", s)
#define pi(x)  printf("%d\n", x)
#define pl(x)  printf("%lld\n", x)
#define ps(s)  printf("%s\n", s)
#define deb(x) cout<< #x << "=" << x << endl;
#define deb2(x, y) cout<< #x << "=" << x <<","<< #y << "=" << y <<endl;
#define all(x) a.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int> pii;
typedef pair<ll, ll>   pl;
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

const int MOD = 1000000007;   //(10^9 + 7)







bool result1(ll a, ll b, ll c, ll p, ll q, ll r)
{
  if(a - p == b - q && b - q == c - r)
    {return true;}

	if((a != p && b == q && c == r) || (a == p && b == q && c != r) ||  (a == p && b != q && c == r))
			{return true;}
		
  if(a != 0 && b != 0 && c != 0 && r % c == 0 && p/a == q/b && p % a == 0 && q % b == 0 &&  q/b == r/c)
    {return true;}
  
  if(a == p || b == q || c == r)
  {
    if(a == p)
    {
      if(b - q == c - r)
			{return true;}
      if(b != 0 && c != 0 && q % b == 0 && r % c == 0 && q/b == r/c)
			{return true;}
    }


		if(c == r)
		{
			if(a - p == b - q)
			{return true;}
			if(a != 0 && b != 0 && p % a == 0 && q % b == 0 && p/a == q/b)
			{return true;}
		}



		
    if(b == q)
    {
      if(a - p == c - r)
			{return true;}
      if(a != 0 && c != 0 && r % c == 0 && p % a == 0 && r/c == p/a)
			{return true;}
    }
  
  }
  return false;
}



bool result2(ll a, ll b, ll c, ll p, ll q, ll r)
{
	if(a == p || b == q || c == r)
		{return true;}

	if((a - p == b - q) || (b - q == c - r) || (a - p == c- r))
		{return true;}

	if(a != 0 && b != 0 && p % a == 0 && q % b == 0 && p/a == q/b)
	{return true;}
	if(a != 0 && c != 0 && p % a == 0 && r % c == 0 && p/a == r/c)
	{return true;}
	if(b != 0 && c != 0 && q % b == 0 && r % c == 0 && q/b == r/c)
	{return true;}

	if((a - p + b - q == c - r) || (a - p + c - r == b - q) || (b - q + c - r == a - p))
		{return true;}

	if(a != 0 && b != 0 && c != 0)
	{
		if(p % a == 0 && q % b == 0 && r % c == 0)
		{
			ll ra = p/a;
			ll rb = q/b;
			ll rc = r/c;
			if(ra == rb * rc || rb == ra * rc || rc == ra * rb)
				return true;
		}
	}

	
	if((p - q) * (b - c) == (q - r) * (a - b) && (q - r) * (a - c) == (p - r) * (b - c) && (p - q) * (a - c) == (p - r) * (a - b))
	{
		ll numerator = (q - r);
		ll denominator = (b - c);
		ll x;
		if(denominator != 0 && numerator % denominator == 0)
		{
			x = numerator/denominator;
			ll y1 = p - a * x;
			ll y2 = q - b * x;
			ll y3 = r - c * x;

			if(y1 == y2 && y2 == y3 && a * x + y1 == p && b * x + y2 == q && c * x + y3 == r)
				return true;
		}
	}


	if((a * q - p * b == (r -c) * (a- b) && (p - r + c) * (a - b) == a * (p - q) && ((p - r + c) * b == (q - r + c) * a)))
	{
		ll numerator = p - q;
		ll denominator = a - b;

		ll x;
		if(denominator != 0 && numerator % denominator == 0)
		{
			x = numerator/denominator;

			ll y1 = p - a * x;
			ll y2 = q - b * x;
			ll y3 = r - c;

			if(y1 == y2 && y2 == y3 && a * x + y1 == p && b * x + y2 == q && c + y3 == r)
				return true;
		}
	}

	if(((p - r) * a == (p - q + b) * (a - c) && (r - q + b) * a == (p - q + b) * c) && (a * r - p * c) == (q - b) * (a - c))
	{
		ll denominator = a - c;
		ll numerator = p - r;
		

		ll x;
		if(denominator != 0 && numerator % denominator == 0)
		{
			x = numerator/denominator;

			ll y1 = p - a * x;
			ll y2 = q - b;
			ll y3 = r - c * x;

			if(y1 == y2 && y2 == y3 && a * x + y1 == p && b + y2 == q && c * x + y3 == r)
				return true;
		}
	}

	if((p - a) * (b - c) == (b * r - q * c) && (q + a - p) * (b - c) == (q - r) * b && (r - p + a) * b == (q - p + a) * c)
	{
		ll numerator = q - r;
		ll denominator = b - c;

		ll x;
		if(denominator != 0 && numerator % denominator == 0)
		{
			x = numerator/denominator;

			ll y1 = p - a;
			ll y2 = q - b * x;
			ll y3 = r - c * x;


			if(y1 == y2 && y2 == y3 && a + y1 == p && b * x + y2 == q && c * x + y3 == r)
				return true;
		}
	}

	if(a != 0 && b != 0 && c != 0 && (r % c == 0 || q % b == 0 || p % a == 0))
	{

		if(r * (a - b) == (p - q) * c)
		{
			if(c != 0 && r % c == 0)
			{
				ll x1 = r/c;
				ll numerator = p - q;
				ll denominator = a - b;
				if(denominator != 0 && numerator % denominator == 0 && x1 == numerator/denominator)
				{
					ll y1 = p - a * x1;
					ll y2 = q - b * x1;
					ll y3 = r - c * x1;
			
					if(y1 == y2 && y3 == 0 && a * x1 + y1 == p && b * x1 + y2 == q && c * x1 + y3 == r)
						return true;
				}
			}
		}
	
		if(a * (q - r) == p * (b - c))
		{
			if(a != 0 && p % a == 0)
			{
				ll x1 = p/a;
				ll numerator = q - r;
				ll denominator = b - c;
				if(denominator != 0 && numerator % denominator == 0 && x1 == numerator/denominator)
				{
					ll y1 = p - a * x1;
					ll y2 = q - b * x1;
					ll y3 = r - c * x1;
			
					if(y3 == y2 && y1 == 0 && a * x1 + y1 == p && b * x1 + y2 == q && c * x1 + y3 == r)
						return true;
				}
			}
		}
		
		if(q * (a - c) == b * (p - r))
		{
			if(b != 0 && q % b == 0)
			{
				ll x1 = q/b;
				ll numerator = p - r;
				ll denominator = a - c;
				if(denominator != 0 && numerator % denominator == 0 && x1 == numerator/denominator)
				{
					ll y1 = p - a * x1;
					ll y2 = q - b * x1;
					ll y3 = r - c * x1;
					if(y1 == y3 && y2 == 0 && a * x1 + y1 == p && b * x1 + y2 == q && c * x1 + y3 == r)
						return true;
				}
			}
		}
	}

	if((q * a == b * (p - r + c) && (p * b - a * q) == b * (r - c)))
	{
		if(b != 0 && q % b == 0)
		{
			ll x1 = q/b;
			ll numerator = p - r + c;
			ll denominator = a;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{
				ll y1 = p - a * x1;
				ll y2 = q - b * x1;
				ll y3 = r - c;
				
				if(y3 == y1 && y2 == 0 && a * x1 + y1 == p && b * x1 + y2 == q && c + y3 == r)
					return true;
			}
		}
	}

	if((p * c == a * (r - q + b) && a * (q - b) == a * r - c * p))
	{
		if(a != 0 && p % a == 0)
		{
			ll x1 = p/a;
			ll numerator = r - q + b;
			ll denominator = c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{
				ll y1 = p - a * x1;
				ll y2 = q - b;
				ll y3 = r - c * x1;
				if(y2 == y3 && y1 == 0 && a * x1  == p && b + y2 == q && c * x1 + y3 == r)
					return true;
			}
		}
	}
	
	if((p * b == a * (q - r + c) && (a * q - b * p) == a * (r - c)))
	{
		if(a != 0 && p % a == 0)
		{
			ll x1 = p/a;
			ll denominator = b;
			ll numerator = q - r + c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{

				ll y3 = r - c;
				ll y1 = p - a * x1;
				ll y2 = q - b * x1;
				
				
				if(y3 == y2 && a * x1 + y1 == p && b * x1 + y2 == q && c + y3 == r)
					return true;
			}
		}
	}
	
	if((q * c == b * (r - p + a) && b * (p - a) == b * r - c * q))
	{
		if(b != 0 && q % b == 0)
		{
			ll x1 = q/b;
			ll numerator = r - p + a;
			ll denominator = c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{
				ll y1 = p - a;
				ll y2 = q - b * x1;
				ll y3 = r - c * x1;

				if(y1 == y3 && y2 == 0 && a  + y1 == p && b * x1 + y2 == q && c * x1 + y3 == r)
					return true;
			}
		}
	}
	
	if( (r * a == (p - q + b) * c && (q - b) * c == (c * p - a * r)))
	{
		if(c != 0 && r % c == 0)
		{
			ll x1 = r/c;
			ll numerator = p - q + b;
			ll denominator = a;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{
				ll y1 = p - a * x1;
				ll y2 = q - b;
				ll y3 = r - c * x1;

				if(y1 == y2 && y3 == 0 && a * x1 + y1 == p && b + y2 == q && c * x1 + y3 == r)
					return true;
			}
		}
	}
	
	if((c * (q - p + a) == b * r && c != 0 && c * (p - a) == q * c - b * r))
	{
		if(c != 0 && r % c == 0)
		{
			ll x1 = r/c;
			ll numerator = q - p + a;
			ll denominator = b;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
			{
				ll y1 = p - a;
				ll y2 = q - b * x1;
				ll y3 = r - c * x1;
	

				if(y1 == y2 && y3 == 0 && a + y1 == p && b * x1 + y2 == q && c * x1 == r)
					return true;
			}
		}
	}
	
	if((p - q) * (b - c) == (q - r) * (a - b) && (p - r) * (b - c) == (q - r) * (a - c))
	{
		ll numerator = a * q - b * p;
		ll denominator = p - q;
		if(denominator != 0 && numerator % denominator == 0)
		{
			ll x1 = numerator/denominator;
			numerator = b * r - q * c;
			denominator = q - r;
			if(denominator != 0 && numerator % denominator == 0)
			{
				ll x2 = numerator/denominator;
				numerator = a * r - q * c;
				denominator = p - r;
				if(denominator != 0 && numerator % denominator == 0)
				{
					ll x3 = numerator/denominator;
					if(x1 == x2 && x2 == x3)
					{
						numerator = p - q;
						denominator = a - b;
						if(denominator != 0 && numerator % denominator == 0)
						{
							ll y1 = numerator/denominator;
							numerator = q - r;
							denominator = b - c;
							if(denominator != 0 && numerator % denominator == 0)
							{
								ll y2 = numerator/denominator;
								numerator = p - r;
								denominator = a - c;
								if(denominator != 0 && numerator % denominator == 0)
								{
									ll y3 = numerator/denominator;
							
									if(y1 == y2 && y2 == y3 && (a + x1) * y1 == p && (b + x2) * y2 == q && (c + x3) * y3 == r)
										return true;
								}
							}
						}
					}
				}
			}
		}
	}
	
	if((r * (a - b) == c * (p - q) && r * (a - b) == c * (p - q)))
	{
		if(c != 0 && r % c == 0)
		{
			ll y1 = r/c;
			ll numerator = p - q;
			ll denominator = a - b;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1)
			{
				if(y1 != 0 && p % y1 == 0)
				{
					ll x1 = p/y1 - a;
					if(q % y1 == 0)
					{
						ll x2 = q/y1 - b;
						ll x3 = r - c * y1;
						if(x1 == x2 && x3 == 0 &&(a + x1) * y1 == p && (b + x1) * y1 == q && c * y1 == r)
							return true;
					}
				}
			}
		}
	}
	
	if((q * (a - c) == b * (p - r) && q * (a - c) == b * (p - r)))
	{
		if(b != 0 && q % b == 0)
		{
			ll y1 = q/b;
			ll numerator = p - r;
			ll denominator = a - c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1)
			{
				if(y1 != 0 && p % y1 == 0)
				{
					ll x1 = p/y1 - a;
					if(r % y1 == 0)
					{
						ll x3 = r/y1 - c;
						ll x2 = q - b * y1;
						if(x1 == x3 && x2 == 0 && (a + x1) * y1 == p && b * y1 == q && (c + x1) * y1 == r)
							return true;
					}
				}
			}
		}
	}

	if((a * (q - r) == p * (b - c) && p * (b - c) == a * (q - r)))
	{
		if(a != 0 && p % a == 0)
		{
			ll y1 = p/a;
			ll numerator = q - r;
			ll denominator = b - c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1)
			{
				if(y1 != 0 && q % y1 == 0)
				{
					ll x1 = q/y1 - b;
					if(r % y1 == 0)
					{
						ll x2 = r/y1 - c;
						ll x3 = p - a * y1;
						if(x1 == x2 && x3 == 0 && (a + x3) * y1 == p && (b + x1) * y1 == q && (c + x1) * y1 == r)
							return true;
					}
				}
			}
		}
	}
	
	if((r - c) * (p - q) == - b * p + a * q && (p - q) * (b + r - c) == q * (a - b))
	{
		ll x1 = r - c;
		ll numerator = - b * p + a * q;
		ll denominator = p - q;
		if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
		{
			if(a + x1 != 0 && p % (a + x1) == 0)
			{
				ll y1 = p/(a + x1);

				if(b + x1 != 0 && q % (b  + x1) == 0)
				{
					ll y2 = q/(b + x1);
					if(y1 == y2 && (a + x1) * y1 == p && (b + x1) * y1 == q && c + x1 == r)
						return true;
				}
			}
		}
	}
	
	if((p - r) * (q - b) == (a * r - p * c) && p * (a - c) == (p - r) * (a +  q - b))
	{
		ll x1 = q - b;
		ll numerator = a * r - p * c;
		ll denominator = p - r;
		if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
		{
			if(a + x1 != 0 && p % (a + x1) == 0)
			{
				ll y1 = p/(a + x1);

				if(c + x1 != 0 && r % (c  + x1) == 0)
				{
					ll y2 = r/(c + x1);
					if(y1 == y2 && (a + x1) * y1 == p && (b + x1) == q && (c + x1) * y1 == r)
						return true;
				}
			}
		}
	}

	if((p - a) * (q - r) == (b * r - q * c) && (q - r) * (b + p - a) == q * (b - c))
	{
		ll x1 = p - a;
		ll numerator = b * r - q * c;
		ll denominator = q - r;
		if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == x1)
		{
			if(b + x1 != 0 && q % (b + x1) == 0)
			{
				ll y1 = q/(b + x1);

				if(c + x1 != 0 && r % (c  + x1) == 0)
				{
					ll y2 = r/(c + x1);
					if(y1 == y2 && (a + x1) == p && (b + x1) * y1 == q && (c + x1) * y1 == r)
						return true;
				}
			}
		}
	}
	
	if((r * (q - b) == p * c - a * r && r * (a + q - b) == c * p))
	{
		ll x1 = q - b;
		ll y1;
		if(c != 0 && r % c == 0)
		{
			y1 = r/c;
			ll numerator = p;
			ll denominator = a + q - b;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && (a + x1) * y1 == p && (b + x1) == q && c * y1 == r)
				return true;
		}
	}

	if((q * (r - c) == b * p - q * a && q * (a + r - c) == p * b))
	{
		ll x1 = r - c;
		if(b != 0 && q % b == 0)
		{
			ll y1 = q/b;
			ll numerator = p;
			ll denominator = a + r - c;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && (a + x1) * y1 == p && b * y1 == q && c + x1 == r)
				return true;
		}
	}
	
	if((r * (p - a) == q * c - b * r && r * (p + b - a) == q * c))
	{
		ll x1 = p - a;
		if(c != 0 && r % c == 0)
		{
			ll y1 = r/c;

			ll numerator = q;
			ll denominator = b + p - a;

			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && a + x1 == p && (b + x1) * y1 == q && c * y1 == r)
				return true;
		}
	}

	if((p * (r - c) == a * q - b * p && p * (b + r - c) == a * q))
	{
		ll x1 = r - c;
		if(a != 0 && p % a == 0)
		{
			ll y1 = p/a;

			ll numerator = q;
			ll denominator = b + r - c;

			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && a * y1 == p && (b + x1) * y1 == q && c + x1 == r)
				return true;
		}
	}
	
	if(((q - b) * p == a * r - c * p && p * (c + q - b) == a * r))
	{
		ll x1 = q - b;
		if(a != 0 && p % a == 0)
		{
			ll y1 = p/a;
			ll numerator = r;
			ll denominator = c + q - b;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && a * y1 == p && b + x1 == q && (c + x1) * y1 == r)
				return true;
		}
	}

	if((q * (c + p - a) == b * r && q * (p - a) == r * b - q * c))
	{
		ll x1 = p - a;
		if(b != 0 && q % b == 0)
		{
			ll y1 = q/b;
			ll numerator = r;
			ll denominator = c + p - a;
			if(denominator != 0 && numerator % denominator == 0 && numerator/denominator == y1 && a + x1 == p && b * y1 == q && (c + x1) * y1 == r)
				return true;
		}
	}
	return false;
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




void solve(int t)
{
	int i,j,n,m,a,b,rem,count=0,sum=0;
	while(t--)
	{
		ll a,b,c,p,q,r;
		cin >> a >> b >> c;
		cin >> p >> q >> r;

		if(a == p && b == q && c == r)
		{
			cout<<"0"<<endl;
			continue;
		}

		if(result1(a, b, c, p , q, r))
		{
			cout<<"1"<<endl;
			continue;
		}

		if(result2(a, b, c, p, q, r))
		{
			cout<<"2"<<endl;
			continue;
		}
		cout<<"3"<<endl;
	}
}



int main()
{
	int t;
	cin >> t;
	solve(t);
	return 0;
}
