import java.io.*;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t; 
        long x, temp, ans, i;
        StringBuilder sb = new StringBuilder();
        t = Integer.parseInt(br.readLine());
        while(t-->0) {
            x = Long.parseLong(br.readLine());
            temp = (long)Math.sqrt(x);
            for(i=1; i<=temp; i*=2);
            i = (x/i)<i/2 ? i/2-1 : x/i;
            ans = x-i;
            sb.append(ans);
            sb.append("\n");
        }
        System.out.println(sb.toString());
        br.close();
    }
}
