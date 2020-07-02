void solve()
{
	int i,j,n,m,a,b,rem,count=0,max_sum=0,sum_now=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]==1)
	    {
	        count++;
	        arr[i] = -1;
	    }
	    else
	    {
	        arr[i] = 1;
	    }
	}
	for(i=0;i<n;i++)
	{
	    sum_now += arr[i];
	    if(sum_now<0)
	    {
	        sum_now=0;
	    }
	    if(sum_now>max_sum)
	    {
	        max_sum=sum_now;
	    }
	}
	cout<<(count+max_sum)<<endl;
}
