import java.util.*;

public class linked_list_class{
	
	public static void main(String args[]) {
		LinkedList<Integer> li = new LinkedList<>();
		
		li.add(10);
		
		li.add(20);
		
		li.add(31);
		
		li.add(40);
		
		System.out.println("The data is added is given below");
		
		for(Integer list:li) {
			System.out.println(list);
		}
		
	}
}
