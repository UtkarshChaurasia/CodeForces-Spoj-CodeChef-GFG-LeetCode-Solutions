import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        BigInteger bi1,bi2,sum,mul;
        String a,b;
        a = sc.nextLine();
        b = sc.nextLine();
        bi1 = new BigInteger(a);
        bi2 = new BigInteger(b); 
        sum = bi1.add(bi2);
        mul = bi1.multiply(bi2);
        System.out.println(sum);
        System.out.println(mul);

    }
}
