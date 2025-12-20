class Worker extends Thread {
    public void run() {
        try {
            for (int i = 1; i <= 3; i++) {
                System.out.println(getName() + " → Count " + i);
                Thread.sleep(500); // pause for 0.5 seconds
            }
        } catch (InterruptedException e) {
            System.out.println(getName() + " was interrupted!");
        }
    }
}

public class ThreadExample {
    public static void main(String[] args) throws InterruptedException {
        Worker t1 = new Worker();
        Worker t2 = new Worker();

        t1.setName("Thread-A");
        t2.setName("Thread-B");

        t1.start();
        t2.start();

        t1.join(); // wait for t1 to finish
        t2.join(); // wait for t2 to finish

        System.out.println("Main thread ends.");
    }
}
