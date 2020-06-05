import java.io.*;
import java.util.*;
public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
         int N = Integer.parseInt(br.readLine().trim());
         String[] arr_A = br.readLine().split(" ");
         int[] A = new int[N];
         for(int i_A=0; i_A<arr_A.length; i_A++)
         {
         	A[i_A] = Integer.parseInt(arr_A[i_A]);
         }
 
         String out_ = solve(A);
         System.out.println(out_);
 
         wr.close();
         br.close();
    }
    static String solve(int[] A){
        // Write your code here
        int n=A.length/2;
        long sum=0;
        //int []num=new int[A.length];
        for(int i=0;i<A.length;i++)
        {
            if(i<n)
            {
                while(A[i]>=10)
                {
                    A[i]=A[i]/10;
                }
                //sum=sum*10+A[i];
            }
            else if(i>=n)
            {
                A[i]=A[i]%10;
                //sum=sum*10+A[i];
            }
        }
        for(int j=0;j<A.length;j++)
        {
            if(j%2!=0)
            {
                sum=sum-A[j];
            }
            else if(j%2==0)
            {
                sum=sum+A[j];
            }
        }
        if(sum%11==0)
        {
           // System.out.println(sum);
            return "OUI";
        }
        else
        {
            //System.out.println(sum);
            return "NON";
        }
    }
}
