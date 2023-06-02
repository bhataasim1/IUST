import java.util.Scanner;
public class Factorial {
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
    }
}
