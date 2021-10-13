import java.io.*; 
    class string_buffer_class { 
    public static void main(String[] args) 
    { 
        StringBuffer s = new StringBuffer("Government Poly"); 
        int p = s.length(); 
        int q = s.capacity(); 
        System.out.println("Length of string =" + p); 
        System.out.println("Capacity of string =" + q); 
    } 
}
