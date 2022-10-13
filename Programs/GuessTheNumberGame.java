import java.util.*;
public class GuessTheNumberGame {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		while() {
			System.out.println("Enter the number to guess");
		    int numberByUser = sc.nextInt();
			int numberbycomputer = rand.nextInt(100); 
			System.out.println("Your Number "+numberByUser +" Number By Computer "+numberbycomputer);
			if(numberByUser==numberbycomputer) {
				System.out.println("You have guess right");
			}
			else {
				System.out.println("You have not guess right number, if you want continue then press number");
			}
		}
	}
}
