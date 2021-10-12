import java.util.*;
public class bool {
    public static void main(String[] args) {

        //relational ops
        int a,b;
        Scanner input=new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();

        // a = 4; b = 5
        System.out.println(a>=b);
        System.out.println(a==b);

        //logical ops
        boolean x=true, y=false, z=true;

        // precedence order
        boolean result= x || y && !z;
        System.out.println(result);
    }
}