import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;

public class TrappingRain {
	public static void main(String[] args) {
		int arr[] = {3,0,0,2,0,4};
		int n = arr.length;
		List<Integer> list = new ArrayList<>();
		List<Integer> list1 = new ArrayList<>();
        int sum=0;
		Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0 || arr[i]<arr[n-2] && i!=0 && i!=n-1){
                list.add(arr[i]);
            }
	    }
        int maxsmall =list.get(list.size()-1);

        LinkedHashSet<Integer> hashSet = new LinkedHashSet<>(list);
        for(int a:hashSet) {
        	list1.add(maxsmall-a);
        }
       for(int j=0;j<list1.size();j++) {
    	  sum=sum+list1.get(j);   
       }
        System.out.println(sum);
 }
}
