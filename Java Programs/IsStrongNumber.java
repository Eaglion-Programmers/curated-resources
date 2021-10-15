package Array;
import java.util.*;
public class IsStrongNumber {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int f = is_StrongNumber(n);
		System.out.println(f);
	}
	 public static int is_StrongNumber(int n)
	    {
	        int sum=0;
	        int num = n;
	        int m = num;
	        int a;
	        ArrayList<Integer> al = new ArrayList<>();
	        while(m > 0)
	        {
	            a = m % 10;
	            al.add(fact(a));
	            m = m / 10;
	            
	        }
	        for(Integer arr: al){
	            sum = sum + arr;
	        }
	        if(sum == num){
	            return 1;
	        }
	        return 0;
	    }
	    static int fact(int n){
	        if(n==0){
	            return 1;
	        }
	        if(n==1){
	            return 1;
	        }
	        return n*fact(n-1);
	    }
}
