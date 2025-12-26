import java.util.*;


public class TwoSum{

    public int[] Solution(int arr[], int target){
    
        Map<Integer, Integer> map = new HashMap<>();
        
      /*for(int i = 0; i < arr.length; i++){
            map.put(arr[i],i);
        } */

        for(int i = 0; i < arr.length; i++){
            int complement = target - arr[i];

            if(map.containsKey(complement)){
                return new int[] { map.get(complement), i};
            }

            map.put(arr[i],i);
        }

        return new int[] {};
    }
    //Time Complexity = O(n)
    //Space Complexity = O(n)


    public static void main(String args[]){
        int arr[] = {2,3,4,1,5,3,7};
        int target = 6;
        TwoSum s1 = new TwoSum();
        int result[] = s1.Solution(arr,target); 
        System.out.println(result[0] +" "+ result[1]);
        
    }
}