class InvalidNameException extends Exception{
	public InvalidNameException(String s) {
		super(s);
	}
}

public class User_define_exception_handling{
	
	static void getUserExcep(String name) throws InvalidNameException {
		if(name=="Siddhi") {
			throw new InvalidNameException("Invalid name");
		}
		else {
			System.out.println(name);
		}
	}
	
	public static void main(String[] args) {
		try {
			getUserExcep("Siddhi");
		}
		catch(Exception e) {
			System.out.println("Exception occur"+e);
		}
		
		System.out.println("In main");
	        }
}
