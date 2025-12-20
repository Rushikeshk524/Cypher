import java.util.Scanner;
public class DAY2 {
    public static int MyFact(int num1){
        if(num1 < 0){
            System.out.println("Invalid input");
            return 0;
        }
        if(num1 == 0 || num1 == 1){
            return 1;
        }
        return num1*MyFact(num1-1);
    }
    public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter a number: ");
       int num1 = sc.nextInt();
       System.out.println(MyFact(num1));  
    }
}
