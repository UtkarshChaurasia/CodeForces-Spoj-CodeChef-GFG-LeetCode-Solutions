import java.util.*;
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.Scanner; 
import java.util.StringTokenizer;
public class TestClass {
	
	static class FastReader{
		BufferedReader br;
		StringTokenizer st;
		
		public FastReader() {
			br= new BufferedReader(new InputStreamReader(System.in));
		}
		String next() {
			while(st==null ||!(st.hasMoreTokens())) {
				try {
					st = new StringTokenizer(br.readLine());
				}
				catch(IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
	}
	
	 public static int findIndex(int i,int N) {
		 if(i==N)
			 return i;
		 int j =2,k=0;
		 while(true) {
			 k = i + j;
			 if(k>N)
				 return i;
			 else if(k==N)
				 return k;
			 j += 1;
			 i = k;
		 }
	 }
	 
 
	public static void main(String[] args) throws Exception{
	    TestClass t= new TestClass();	
		FastReader s= new FastReader();
		int N = s.nextInt();
		 int[] a =  new int[N];
		 long[] b = new long[N];
		 a[0] = s.nextInt();
		 b[0] = a[0];
		 for(int i=1;i<N;i++) {
			 a[i] = s.nextInt();
			 b[i] = a[i] + b[i-1];
			 
		 }
		  
		 long sum = 0, max = 0;
		 max = b[findIndex(0,N-1)];
		 for(int i=1;i<N;i++) {
			 int j= findIndex(i,N-1);
			 sum = b[j] - b[i-1];
			 if(sum>max)
				 max = sum;
			  
		 }
		 System.out.println(max);
	}
}
