import java.util.*;
public class RotateArray {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = {8,3,1,2};
		int sum=0;
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=0;i<n;i++) {
			int j,last;
			  last = arr[arr.length-1];    
	            
	            for(j = arr.length-1; j > 0; j--){    
	                arr[j] = arr[j-1];    
	            }
	            arr[0] = last;    
	            
	            for(int k=0;k<arr.length;k++) {
	            	sum = sum+arr[k]*k; 
	            }
	            al.add(sum);
	            sum=0;
	            
	        }
			System.out.println(Collections.max(al));
		
			
		}
	}
