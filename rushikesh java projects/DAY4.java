class Pen{
    String color;
    String type;

    public void write(){
        System.out.println("Writing something with "+this.type);
    }
    public void printColor(){
        System.out.println(this.color);
    }
}
class Student{
    String name;
    int age;
    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
}
public class DAY4 {
    public static void main(String[] args){
        Student s1 = new Student();
        s1.name = "rushikesh";
        s1.age = 19;
        Student s2 = new Student();
        s2.name = "soham";
        s2.age = 14;
        s2.printInfo();
        Pen Flair = new Pen();
        Flair.color = "black";
        Flair.type = "ball";
        Flair.printColor();
    }
    
}
