//fo(i,n+1) = for(i=0;i<n+1;i++)





int fib(int n)
{
    int a=0,b=1,c,i;
    if(n==0)
    {
        return a;
    }
    else
    {
        fo(i,n+1)
        {
            c=a+b;
            a=b;
            b=c;
            
        }
        return b;
    }
}


void solve()
{
	int i,j,n,m,a,b,rem,count=0,sum=0,result;
	cin>>n;
	result = pow(2,n) - fib(n);
	cout<<result<<endl;
}
