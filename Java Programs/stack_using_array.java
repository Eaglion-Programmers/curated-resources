class stack1 {
    int top;
    int arr[];
    public stack1(){
        top = -1;
        arr = new int[1000];
    }
    void push(int data)
    {
        top++;
        arr[top] = data;
    }
    int pop()
    {
        int data;
        if(top == -1)
        {
            return -1;
        }
        data = arr[top];
        top--;
        return data;
    }
    int peek(){
        return arr[top];
    }
    void display(){
        for(int i=0;i<=top;i++)
        {
            System.out.println(arr[i]+" ");
        }
    }
}
public class Main
{
    
    
	public static void main(String[] args) {
		System.out.println("Hello World");
		stack1 s1 = new stack1();
        s1.push(10);
        s1.push(20);
        s1.pop();
        System.out.println(s1.peek());
        s1.display();
		
	}
}

