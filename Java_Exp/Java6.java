
class Animal{
    void Sound(){
        System.out.println("Make some noise");
    }
}
 class Dog extends Animal{
    void Sound(){
        System.out.println("Bark");
    }
 }
public class Java6 {
    public static void main(String args[]){
        Animal n1 = new Dog();
        System.out.println("Dog");
        n1.Sound();
        Animal n2 = new Animal();
        n2.Sound();
    }
}
