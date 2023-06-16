abstract class Func {
    abstract void display();
}

class Joker extends Func {
    void display() {
        System.out.println("I am Joker Class");
    }
}

class Joker1 extends Func {
    void display() {
        System.out.println("I am Joker1 class");
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        Func a1 = new Joker();
        a1.display();

        Func a2 = new Joker1();
        a2.display();
    }
    
}
