class ParentDetails 
{ 
 public void printData()
 { 
System.out.println("showing the details of Parent ");
 } 
}
 class method_overridden extends ParentDetails
 { 
 public void printData()
 { 
System.out.println(" showing the details of child"); 
}
 public static void main( String args[])
 {
 ParentDetails parentObject = new method_overridden(); //This will call the child class method parentObject.printData();
 parentObject.printData();
 }
 }
