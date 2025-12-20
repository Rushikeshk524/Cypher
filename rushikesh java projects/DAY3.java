import java.util.*;
public class DAY3 {
    public static void main(String[] args){
        int array[] = {23, 34, 12, 44, 81, 55};
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to find in array: ");
        int key = sc.nextInt();
        for(int i = 0; i < array.length; i++){
           if(array[i] == key){
            System.out.println("key element at index: "+i);
            return;
           }
        }
        
        System.out.println("Element not found");
        return;
    }
    }
