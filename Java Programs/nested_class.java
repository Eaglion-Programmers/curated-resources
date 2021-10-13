class NestedOuterclass
{
	static int outer_x=20;
	int outer_y=50;
	private static int outer_private=70;
	static class StaticNestedClass
	{
		void display()
		{
			System.out.println("outer_x:  " +outer_x);
			System.out.println("outer_private:  " +outer_private);
		}
	}
}

public class nested_class
{
        public static void main(String[] args)
        {
        	NestedOuterclass.StaticNestedClass obj = new NestedOuterclass.StaticNestedClass();
        	obj.display();	
        }
}
