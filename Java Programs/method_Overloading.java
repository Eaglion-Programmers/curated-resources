class  newJavaFile
{
    public void disp(char c)
    {
         System.out.println(c);
    }
    public void disp(char c, int num)  
    {
         System.out.println(c + " "+num);
    }}
class method_Overloading
{
   public static void main(String args[])
   {
       newJavaFile obj = new newJavaFile();
       obj.disp('a');
       obj.disp('a',30);
   }}
