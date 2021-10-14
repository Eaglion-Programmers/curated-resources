import java.util.*;
public class BinarySearch {
	public static void main(String[] args) {
		int arr[] = {20,4,112,43,80,31,12};
		Arrays.sort(arr);
		for(int a: arr) {
			System.out.print(a+" ");
		}
		System.out.println();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the key");
		int key = sc.nextInt();
		int mid;
		int start = 0;
		int end = arr.length;
		try {
		while(start <= end) {
			mid = (start + end)/2;
			if(arr[mid]==key) {
				System.out.println("Key is found");
			}
			if(key < arr[mid]) {
				end = mid-1;
			}
			else {
				start = mid+1;
			}
			
		}
		}
		catch(Exception e) {
			
		}
		
	}
}
