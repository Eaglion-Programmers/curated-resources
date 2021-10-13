import java.util.*;

public class Map_class {
	
	public static void main(String args[]) {
		Map<Integer,String> li = new HashMap<>();
		
		li.put(5000, "Samsung");
		li.put(3000, "MI");
		li.put(70000, "Realme");
		li.put(200000,"iPhone");
		System.out.println("Added Elements Display Below");
		for(Map.Entry<Integer, String> list: li.entrySet()) {
			System.out.print(list.getKey()+" ");
			System.out.print(list.getValue()+" ");
			System.out.println();
		}
	}
}
