import java.util.Scanner;

class Divide {
    public void Div() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Nominator ");
        int a = sc.nextInt();

        System.out.print("Enter Denominator ");
        int b = sc.nextInt();

        if(b == 0) {
            throw new ArithmeticException("can not Divide by Zero");  // Use of THROW keyword
        }
        else {
            System.out.println("Result = " + a/b);
        }
    }
}

public class ThrowExcep {
    public static void main(String[] args) {
        Divide d = new Divide();
        d.Div();
    }
}
