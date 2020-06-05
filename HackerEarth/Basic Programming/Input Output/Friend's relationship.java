import java.util.*;
class TestClass
{ 
public static void main(String args[])
{ 
Scanner sc=new Scanner(System.in);
int k,N;
int t=sc.nextInt();
for(int i=1;i<=t;i++)
{ 
N=sc.nextInt();
 
for(int j=1;j<=N;j++)
{
for(k=1;k<=N*2;k++)
{
if(k<=j || k>N*2-j)
{
 
System.out.print("*");
}
else
System.out.print("#");
}
System.out.println();
}
 
}
 
}
}
