class JaVa{
    void print(){
        System.out.println("i am Java");
    }
}

class cpp extends JaVa {
    @Override
    void print(){
        System.out.println("i am cpp");
    }
}
public class OverRiding {
    public static void main(String[] args) {
        JaVa j = new JaVa();
        cpp c = new cpp();
        j.print();
        c.print();
    }
}
