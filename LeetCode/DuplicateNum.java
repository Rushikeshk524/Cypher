import java.util.HashSet;


public class DuplicateNum {

    public static int Solution(int test[], int size){
        //implementation of Hashset
        HashSet<Integer> seenNumbers = new HashSet<>(); 
        //int num : test does num = test[i]
        for(int num : test){
            if(seenNumbers.contains(num)) {
                return num;
            }
            seenNumbers.add(num);
        }
        return -1;

    }
    public static void main(String args[]){
        int test[] = {2, 4, 4, 1, 3, 5};
        int size = test.length;
        //java doesnt have a sizeof function so use .length
        int result = Solution(test,size);
        
        System.out.println(" duplicate num is "+result);
    }
}
