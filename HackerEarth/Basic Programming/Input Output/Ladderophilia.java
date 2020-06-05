import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception 
    {
            Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		for (int i=0; i<n; i++) {
			for(int j=0; j<2; j++) {
				System.out.println("*   *");
			}
			System.out.println("*****");
		}
		for(int j=0; j<2; j++) {
			System.out.println("*   *");
		}
 
    }
}
