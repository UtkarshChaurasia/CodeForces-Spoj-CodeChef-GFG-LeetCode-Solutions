import java.io.DataInputStream;
import java.io.IOException;
 
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
 
    
        Reader sc = new Reader();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
         int firstLine[]=new int[2];
         firstLine[0]=sc.nextInt();
         firstLine[1]=sc.nextInt();
         int arr[]=new int[firstLine[0]];
         double sum[]=new double[firstLine[0]+1];
         int l=0,r=0;
         long mean=0l;
         sum[0]=0;
         
         for(int i=0;i<firstLine[0];i++)
         {
             arr[i]=sc.nextInt();
             sum[i+1]=sum[i]+arr[i];
         }
    
         for(int i=0;i<firstLine[1];i++)
         {
             l=sc.nextInt();
             r=sc.nextInt();
             mean=(long)Math.floor(sum[r]-sum[l-1])/(r-l+1);
             bw.write(Long.toString(mean));
             bw.write("\n");
         }
         sc.close();
        bw.close();
 
    }
     static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ') {
                c = read();
            }
            boolean minus = (c == '-');
            if (minus) {
                c = read();
            }
            do {
                ret = ret * 10 + c - '0';
            } while ((c=read()) >='0' && c <= '9');
            if (minus) return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
 
        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
 
        public void close() throws IOException {
            if (din==null) return;
            din.close();
        }
 
    }
 
}
