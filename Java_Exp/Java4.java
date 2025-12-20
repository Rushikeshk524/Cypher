import java.util.Scanner;

abstract class Shape{
    abstract void area(float rad);
}
class Circle extends Shape{
    void area(float rad){
        double area = 3.14*rad*rad;
        System.out.println("Area of circle is " +area + " sq meter");
    }
}

public class Java4 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int radius = 3;
        System.out.println("Enter a radius of a circle: ");
        float rad = sc.nextFloat();

        Shape n1 = new Circle();
        n1.area(rad);
        Circle.area(radius);
        sc.close();
    }
}
