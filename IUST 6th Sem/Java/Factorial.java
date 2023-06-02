import java.util.Scanner;
public class Factorial {

    // Name : Aasim Ashraf
    // Roll No : CSE-20-LE-63

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int fact = 1;
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        for(int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        System.out.println("Factorial of " + num + " = " + fact);
        System.out.print("Name : Aasim Ashraf");
        System.out.print("Roll No : CSE-20-63");
    }
}
