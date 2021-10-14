package Array;
import java.util.*;
public class Amicable_Pair {
	public static void main(String[] args) {
		ArrayList<Integer> al = new ArrayList<>();
        ArrayList<Integer> la = new ArrayList<>();
        int A = 220;
        int B = 284;
        int sum=0;
        int sum1 = 0;
        for(int i=1;i<=A/2;i++){
            if(i==1){
                al.add(i);
            }
            else{
                if(A%i==0){
                    al.add(i);
                }
            }
        }
        System.out.println(al);
        for(int i=1;i<=B/2;i++){
            if(i==1){
                la.add(i);
            }
            else{
                if(B%i==0){
                    la.add(i);
                }
            }
        }
        System.out.println(la);
        for(int i=0;i<al.size();i++)
        {
        	sum = sum + al.get(i);
        }
        for(int i=0;i<la.size();i++)
        {
        	sum1 = sum1 + la.get(i);
        }
        System.out.println(sum +" "+ sum1);
        if(sum==B && sum1==A) {
        	System.out.println("1");
        }
        else {
        	System.out.println("0");
        }
        
	}
}
