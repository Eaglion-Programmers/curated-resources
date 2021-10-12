class constructor_overloading{  
    int id;  
    String name;  
    int age;  
   constructor_overloading(int i,String n){  
    id = i;  
    name = n;  
    }  
    constructor_overloading (int i,String n,int a){ 
  id = i;  
    name = n;  
    age=a;  
    }  
    void display(){System.out.println(id+" "+name+" "+age);}  
   
    public static void main(String args[]){  
    constructor_overloading  s1 = new constructor_overloading (1,"ABC",20);  
    constructor_overloading  s2 = new constructor_overloading (2,"XYZ",18);  
    s1.display();  
    s2.display();  
   }  
}  
