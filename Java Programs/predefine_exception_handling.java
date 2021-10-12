class predefine_exception_handling{
		public static void main(String[] args) {
		int a;
		try {
			a = 200/0;
			System.out.println(a);
		}
		catch(Exception e) {
			throw e;
		}
		finally {
			System.out.println("finally block is executing");
		}
	     }
}
