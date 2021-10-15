import java.util.*;
public class FindMaxNumber {
	public static void main(String[] args) {
		String s = "1234568";
		char[] arr = s.toCharArray();
		ArrayList<Character> al = new ArrayList<>();
		for(int i=0;i<arr.length;i++) {
			al.add(arr[i]);
		}
		Collections.sort(al,Collections.reverseOrder());
		for(int i=0;i<al.size();i++) {
			arr[i] = al.get(i);
		}
		s = String.valueOf(arr);
		System.out.println(s);
	
	}
}
