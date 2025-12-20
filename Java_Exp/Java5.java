class Calculator{
    int add(int num1, int num2){
        return num1 + num2;
        }
    double add(double num1, double num2){
        return num1 + num2;
    }
}

public class Java5 {
    public static void main(String args[]){
        Calculator c1 = new Calculator();
        System.out.println(c1.add(12, 23));
        System.out.println(c1.add(23.43, 34.89));
    }
}
