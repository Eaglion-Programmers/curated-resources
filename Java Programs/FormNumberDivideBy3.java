import java.util.*;
public class FormNumberDivideBy3 {
	
	public static void main(String[] args) {
		int arr[] = {10,50,30};
		int sum=0;
		for(int i=0;i<arr.length;i++) {
			sum = sum+arr[i];
		}
		if(sum%3==0) {
			System.out.println("1");
		}
		else {
			System.out.println("0");
		}
	}
}
