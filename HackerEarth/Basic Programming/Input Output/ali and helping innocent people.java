import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        boolean valid = true;
        String vowel="AEIOUY";
        if(vowel.contains(str.substring(2,3)))valid=false;
        if(valid){
            for(int i=0;i<str.length()-1;i++){
                int j = i+1;
                
                if(i==1||i==2 ||i==6||i==5)continue;
                int a = Character.getNumericValue(str.charAt(i));
                int b = Character.getNumericValue(str.charAt(j));
                if((a+b)%2!=0){
                    valid = false;
                    break;
                }
            }
        }
        if(valid)System.out.print("valid");
        else System.out.print("invalid");
 
    }
}
