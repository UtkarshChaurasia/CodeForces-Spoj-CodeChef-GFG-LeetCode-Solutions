#include<stdio.h>
int main()
{
    int n,i,j,x,y,count;
    char s[1000000];
    scanf("%d",&n);
    getchar();
    gets(s);
    x=0,y=0;
    count=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            y++;
        }
        else if(s[i]=='R')
        {
            x++;
        }
        if(x==y&&s[i]==s[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
