import java.util.*;
class SortAlgorithm {
    //bubble sort
    public static void Bubblesort(int array[]){
        for(int i = 0; i < array.length - 1; i++){
            for(int j = 0; j < array.length - 1; j ++){
                if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                }
            }
        }
        System.out.println("Bubble sort");
        for(int i = 0; i < array.length - 1; i++){
            System.out.println(" "+array[i]);
        }
    } 
    //Selection Sort
}
public class DAY5 {
   public static void main(String[] args){
        int array[] = {12, 34, 88, 31, 10, 65};
        SortAlgorithm.Bubblesort(array);
    }
}
