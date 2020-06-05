import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        
        while(t-->0)
        {
            String no=sc.next();
            int count=0;
            for(int i=0;i<no.length();i++)
            {
                count+=countM(no.charAt(i));
            }
            StringBuilder st=new StringBuilder();
            if(count%2!=0)
            {
                st.append("7");
                count=count-3;
            }
            for(int i=0;i<count/2;i++)
            {
                st.append("1");
            }
            System.out.println(st.toString());
        }
    }
        public static int countM(char no)
        {
            if(no=='0' || no=='6'|| no=='9')
            return 6;
            else if(no=='2' ||no=='3' ||no=='5')
            {
                return 5;
 
            }
            else if(no=='1')
            return 2;
            else if(no=='7')
            return 3;
            else if(no=='4')
            return 4;
            else 
            return 7;
            
        }
        
}
