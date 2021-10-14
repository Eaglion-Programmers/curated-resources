package Array;
import java.util.*;
public class NextGreaterElement {
	public static void main(String[] args) {
		long arr[] = {1,3,2,4};
		long a[] = new long[arr.length];
		for(int i=0;i<arr.length-1;i++) {
			for(int j=0;j<arr.length;j++) {
				if(arr[i]<arr[i+j]) {
					a[i]=arr[j];
					break;
				}
				else if(arr[i]>arr[i+j]) {
						a[i] = -1;

				}
				else if(i==arr.length-1) {
						a[i] = -1;

				}
			}
		}
		for(long al:a) {
			System.out.println(al);
		}
	}
}
