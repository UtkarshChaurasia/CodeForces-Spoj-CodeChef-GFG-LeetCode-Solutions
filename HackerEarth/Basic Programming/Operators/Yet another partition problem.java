import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
 
public class PartitionArray {
	
	 public static void main(String args[] ) throws Exception {
	       
	        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
	        int T = Integer.parseInt(br.readLine());
	        while(T-- > 0)
	        {
	            int n = Integer.parseInt(br.readLine());
	            String arr[] = br.readLine().split(" ");
	            int a[] = new int[n];
	            int max = 0,xo = 0,first,second=0;
	            for(int i=0;i<n;i++)
	            {
	                a[i] = Integer.parseInt(arr[i]);
	                xo ^= a[i];
	            }
	            max = xo;
	            first = 0;
	            for (int i=0; i<n; i++)
	            {
	                first ^= a[i];
	                second = xo^first;
	                if ((first&second) > max)
	                max = (first&second);
	            }
	            System.out.println(max);
	        }
	    }
}
