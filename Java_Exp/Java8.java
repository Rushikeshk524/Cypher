class Bakchodi extends Thread{
    public void run(){
        for(int i = 0; i < 10; i++){
            if(i % 2 == 0){
            System.out.println(+i);
            try{Thread.sleep(100);}catch (Exception e){}
            }
            else{
            System.out.println(+i);
            try{Thread.sleep(150);}catch (Exception e){}
            }
        }

    }
}

public class Java8 {
    public static void main(String args[]){
        Bakchodi T = new Bakchodi();
        T.start();
    }
}
