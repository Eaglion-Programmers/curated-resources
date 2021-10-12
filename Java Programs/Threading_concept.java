class Threading extends Thread 
{ 
	public void run() 
	{ 
		try
		{ 
			System.out.println ("Thread " + 
				Thread.currentThread().getId() + 
				" is executing"); 

		} 
		catch (Exception e) 
		{ 
			System.out.println ("There is Exception"); 
		} 
	} 
} 
public class Threading_concept 
{ 
	public static void main(String[] args) 
	{ 
		int n = 10;  
		for (int i=0; i<n; i++) 
		{ 
			Threading object = new Threading(); 
			object.start(); 
		} 
}	
 }
