public class casting {
    public static void main(String[] args)
    {
        int marks1 = 20;
        int marks2 = 40;
        int marks3 = 50;

        double average = ((double)marks1 + (double)marks2 + (double)marks3)/3;
        System.out.println(average);

        // another example
        char x = 'a';
        int value = (int)x;
        System.out.println(value);
    }
}
