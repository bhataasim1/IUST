class RunnableClass1 implements Runnable {
    public void run() {
        System.out.println("Run method of Runnable Class 1");
    }
}

class RunnableClass2 implements Runnable {
    public void run() {
        System.out.println("Run method of Runnable class 2");
    }
}

class RunnableClass3 implements Runnable {
    public void run() {
        System.out.println("Run method of Runnable Class 3");
    }
}

public class RunnableThread {
    public static void main(String[] args) {
        RunnableClass1 r1 = new RunnableClass1();
        RunnableClass2 r2 = new RunnableClass2();
        RunnableClass3 r3 = new RunnableClass3();

        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r2);
        Thread t3 = new Thread(r3);

        t1.start();
        t3.start();
        t2.start();
    }
}
