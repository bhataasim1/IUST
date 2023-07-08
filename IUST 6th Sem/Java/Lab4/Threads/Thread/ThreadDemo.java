class ChildClass1 extends Thread {
    public void run() {
        System.out.println("Run method of the first class.");
    }
}


class ChildClass2 extends Thread {
    public void run() {
        System.out.println("Run method of the second class.");
    }
}

class ChildClass3 extends Thread {
    public void run() {
        System.out.println("Run method of the third class.");
    }
}

public class ThreadDemo {
    public static void main(String[] args) {
        ChildClass1 c1 = new ChildClass1();
        ChildClass2 c2 = new ChildClass2();
        ChildClass3 c3 = new ChildClass3();
        
        c3.start();
        c2.start();
        c1.start();
    }
}
