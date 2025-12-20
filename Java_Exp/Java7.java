interface Vehicle {
    public void Brand();
    public void Model();
    public void Country();    
}

class Car implements Vehicle {
    public void Brand() {
        System.out.println("Hyundai");
    }
    public void Model() {
        System.out.println("Creta");
    }
    public void Country() {
        System.out.println("India");
    }
}

class Truck implements Vehicle {
    public void Brand(){
        System.out.println("Ford");
    }
    public void Model(){
        System.out.println("Ranger");
    }
    public void Country(){
        System.out.println("America");
    }
}
public class Java7 {
    public static void main(String args[]){
        Vehicle n1 = new Truck();
        n1.Brand();
        n1.Model();
        n1.Country();
    }
}
