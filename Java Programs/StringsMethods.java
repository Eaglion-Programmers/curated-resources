
import java.util.*;

public class StringsMethods {
    public static void main(String[] args) {
        String name = "Java";
        int a = name.length();
        System.out.println(a);

        String n = "JAVA";
        String nm = n.toLowerCase(Locale.ROOT);
        System.out.println(nm);

        String s = "java";
        String j1 = s.toUpperCase(Locale.ROOT);
        System.out.println(j1);
      
        String t = "Happy";
        System.out.println(t.endsWith("y"));
        System.out.println(t.endsWith("r"));
      
     }

}
