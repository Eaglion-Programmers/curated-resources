//Swapping two number

import java.util.*;

public class NumberSwapping {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st number : ");
        int a = sc.nextInt();
        System.out.print("Enter 2nd number : ");
        int b = sc.nextInt();
        System.out.println("A and B before swapping are : " + a + " and " + b);

        int c = a;
        a = b;
        b = c;

        System.out.println("A and B after swapping are : " + a + " and " + b);
        sc.close();
    }
}
