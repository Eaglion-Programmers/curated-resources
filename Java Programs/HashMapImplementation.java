import java.util.*;
public class HashMapImplementation {
	public static void main(String[] args) {
		Map<String,Integer> m = new HashMap<>();
		m.put("Audi", 18);
		m.put("Benz", 14);
		m.put("Maruti", 12);
		
		Map<String,Integer> m1 = new HashMap<>();
		m.put("Audi", 18);
		m.put("BMW", 14);
		m.put("Swift", 12);
		
		
		System.out.println(m.get("Audi"));
		System.out.println(m.keySet());
		System.out.println(m.values());
		System.out.println(m.entrySet());
		System.out.println(m.containsKey("Benz"));
		System.out.println(m.isEmpty());
		System.out.println(m.entrySet().equals(m1.entrySet()));
		System.out.println(m.size());
		System.out.println(getHash("DOG"));
	}
	
	public static int getHash(String s) {
		int hash = 0;
		for(int i=0;i<s.length();i++) {
			hash = hash+s.charAt(i);
		}
		return hash;
	}
}
