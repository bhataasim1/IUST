import java.util.Scanner;

class Divide {
    public void Div() throws ArithmeticException { //Use of Throws Keyword
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Numerator : ");
        int a = sc.nextInt();

        System.out.print("Enter Denominator : ");
        int b = sc.nextInt();

        try {
            System.out.println("Result = " + a/b);
        }
        catch(Exception e) {
            throw new ArithmeticException("Can't Divide by Zero");
        }
        finally {
            System.out.println("This is Finally mehtod and is always Excuted");
        }
    }
} 

public class ThrowsFinally {
    public static void main(String[] args) {
        Divide d = new Divide();
        d.Div();
    }
}
