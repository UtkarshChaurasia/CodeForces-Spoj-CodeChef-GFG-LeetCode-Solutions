import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        StringBuilder Arev = new StringBuilder();
        Arev.append(A);
        Arev = Arev.reverse();
        String rev = Arev.toString();
        if(rev.compareTo(A)==0)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }

        
    }
}



