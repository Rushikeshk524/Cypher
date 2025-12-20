import java.util.Scanner;

public class Day1 {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter a date: ");
      int date = sc.nextInt();
      switch(date){
        case 1:
        System.out.println("today is monday");
        break;
        case 2:
        System.out.println("today is tuesday");
        break;
        case 3:
        System.out.println("today is wednesday");
        break;
        case 4:
        System.out.println("today is thursday");
        break;
        case 5:
        System.out.println("today is friday");
        break;
        case 6:
        System.out.println("today is saturday");
        default:
        System.out.println("There are only 7 days a week");
      }
    }
    
}
