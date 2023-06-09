public class Constructor {
    int x, y;

    Constructor() {
        this.x = x;
    };
    Constructor(int x, int y) {
        this.x = x;
        this.y = y;
    };
    public static void main(String[] args) {
        Constructor c = new Constructor();
        c.x = 10;
        System.out.println(c.x);

        Constructor c1 = new Constructor(10, 20);
        System.out.println(c1.x + " " + c1.y);
    }
}
