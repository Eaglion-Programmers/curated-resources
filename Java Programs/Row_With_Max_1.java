import java.util.*;
public class Row_With_Max_1 {
	public static void main(String[] args) {
		int arr[][] = {{0, 1, 1, 1},
		           {0, 0, 1, 1},
		           {1, 1, 1, 1},
		           {0, 0, 0, 0}};
		   int count =0;
           HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
           for(int i=0; i<arr.length; i++){
               for(int j=0; j<arr[i].length; j++){
                   if(arr[i][j]==1){
                       count++;
                   }
               }
               int pre = 0;
               
               if(count>pre){
                   pre = count;
                   map.put(i, pre);
               }
               count =0;
           }
   	   	int max = 0;
           for(Map.Entry<Integer, Integer> m: map.entrySet()){

        	   	if(max<m.getValue()){
        	   		max = m.getValue();
        	   	}
           }
           for(Map.Entry<Integer, Integer> m: map.entrySet()){

       	   	if(max==m.getValue()){
       	   		System.out.println(m.getKey());
       	   	}
          }
               
	}
}
