interface ABC
{
		void display();
}
interface XYZ
{
		void add();
}
class sencond implements ABC,XYZ
{
		public void display()
	{
		System.out.println("You are in display");
	}
	public void add()
	{
		int a=50,b=50;
		System.out.println("Addition="+(a+b));
	}
}

public class interfaces
{
		public static void main(String[] args) {
		sencond obj=new sencond();
		obj.display();
		obj.add();
	}
       }
