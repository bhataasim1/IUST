import java.util.ArrayList;

public class LambdaExp {
    public static void main(String[] args) {
        ArrayList<Integer> Lamb = new ArrayList<Integer>();
        Lamb.add(1);
        Lamb.add(3);
        Lamb.add(5);

        // Using Lambda Expression
        Lamb.forEach(n -> System.out.println(n));
    }
}
