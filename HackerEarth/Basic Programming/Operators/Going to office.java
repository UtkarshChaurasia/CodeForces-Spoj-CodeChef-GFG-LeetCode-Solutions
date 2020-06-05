import java.util.Scanner;
class sample
{
    public static void main(String args[])
    {
        long cs,cb,cm,cd,oc,of,od,d,onl,cla;
        Scanner sc=new Scanner(System.in);
        d=sc.nextLong();
        oc=sc.nextLong();
        of=sc.nextLong();
        od=sc.nextLong();
        cs=sc.nextLong();
        cb=sc.nextLong();
        cm=sc.nextLong();
        cd=sc.nextLong();
        cla=(d/cs)*cm+cb+(cd*d);
        if(d<=of)
        {
            onl=oc;
        }
        else
        {
            onl=oc+((d-of)*od);
        }
        if(cla>=onl)
        {
            System.out.println("Online Taxi");
        }
        else
        {
            System.out.println("Classic Taxi");
        }
    }
}
