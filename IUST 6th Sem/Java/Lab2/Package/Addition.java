package myPack;

public class Addition {
    private int a, b;

    public void getNum(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public void Display() {
        System.out.println("Sum = " + (a + b) + "\n");
    }
}
