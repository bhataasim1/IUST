public class MethodOverloading {
    int x, y;

    public void displayInfo() {
        System.out.println("x = " + x + ", y = " + y);
    }

    public void displayInfo(int x, int y) {
        System.out.println("x = " + x + ", y = " + y);
    }

    public static void main(String[] args) {

        MethodOverloading m = new MethodOverloading();
        m.x = 10;
        m.y = 20;
        m.displayInfo();

        m.displayInfo(70, 30);
    }
}
