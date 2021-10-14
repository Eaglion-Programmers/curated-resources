import java.util.*;
public class Recursion {
	public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
		int result = fact(n);
		System.out.println(result);
		
	}
	public static int fact(int n) {
		// Base case for function 
		if(n==0) {
			return 1;
		}
		return n*fact(n-1);
		
	}
}
