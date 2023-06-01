import java.util.Scanner;
public class Multiplication {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        for(int i = 1; i <= 10; i++)
            System.out.println(num + " * " + i + " = " + (num * i));
            System.out.println("Name : Aasim Ashraf");
            System.out.println("Roll NO : CSE-20-LE-63");
    }
}
