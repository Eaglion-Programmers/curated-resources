class Employee{
	String name;
	int yearofjoin;
	String address;
	double salary;
	
	public Employee(String name, int yearofjoin,String address,double salary) {
		this.name = name;
		this.yearofjoin = yearofjoin;
		this.address = address;
		this.salary = salary;
	}
	public void display() {
		System.out.println(name + " "+ yearofjoin + " "+ address +" "+ salary);
	}
}

public class ObjectAndClasses {
	public static void main(String[] args) {
		Employee e1 = new Employee("Tejas",2,"Pune",10000.00);
		Employee e2 = new Employee("Suraj",5,"Mumbai",100000.00);
		Employee e3 = new Employee("Rohan",8,"Rajkot",200001.00);
		System.out.println("Name"+" "+"Year of Join"+" "+"Address"+ " "+"Salary");
		e1.display();
		e2.display();
		e3.display();
	}
}
