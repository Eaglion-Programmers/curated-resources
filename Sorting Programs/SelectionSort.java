import java.util.Scanner;

public class SelectionSort {
  public static void main(String[] args) {
	  Scanner sc = new Scanner(System.in);
	  System.out.println("Enter the size of array");
	  int n = sc.nextInt();
	  int[] array = new int[n];
	  //Accept the value from the user
	  System.out.println("Enter the number in array");
	  for(int i=0;i<array.length;i++) {
		  array[i]=sc.nextInt();
	  }
	  
	  for(int i=0;i<n-1;i++) {
		//This is intialization of min for getting the minmum value in array
		  int min = i;
		  for(int j=i;j<n;j++) {
			  if(array[j]<array[min]) {
				  min=j; 
			  }
		  }  //Here is the logic for swap
			  int tmp =array[i];
			  array[i]=array[min];
			  array[min]=tmp;
		  
	  }
	  System.out.println("Here is the result of the array");
	  for(int a:array) {
		  System.out.print(a+ " ");
	  }
	  
  }
}
