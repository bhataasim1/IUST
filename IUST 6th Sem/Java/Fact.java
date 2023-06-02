import java.util.Scanner;
public class Fact {

    // Name : Aasim Ashraf
    // Roll No : CSE-20-LE-63

    public static int Factorial(int x)
    {
        if(x == 0 || x == 1)
            return 1;
        else
            return (x * Factorial(x - 1));
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int number;

        System.out.print("Enter a number: ");
        number = sc.nextInt();
        System.out.print("Factorial of Number = " + Factorial(number));
        System.out.print("Name : Aasim Ashraf");
        System.out.print("Roll No : CSE-20-63");
    }
}
