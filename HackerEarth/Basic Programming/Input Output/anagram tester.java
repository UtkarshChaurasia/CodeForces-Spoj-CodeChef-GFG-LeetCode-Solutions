import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
    if(a.length() != b.length()) return false;
        int c[]=new int[26];
        int d[]=new int[26];
        a=a.toUpperCase();
        b=b.toUpperCase();
        int l=a.length();
        for(int i=0;i<l;i++)
        {
            c[a.charAt(i)-'A']++;
            d[b.charAt(i)-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(c[i]!=d[i])
            {
                return false;
            }
        }
    
                return true;
            
        
    
    }


    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
