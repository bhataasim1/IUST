import java.util.Scanner;
import java.lang.Math;
public class QuadraticRoots {

    // Name : Aasim Ashraf
    //Roll No: CSE-20-LE-63
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the value of 'A' : ");
        int a = sc.nextInt();

        System.out.print("Enter the value of 'B' : ");
        int b = sc.nextInt();

        System.out.print("Enter the value of 'C' : ");
        int c = sc.nextInt();

        double x1, x2;

        int formulla = b*b - 4*a*c;

        if(formulla > 0)
        {
            x1 = (-b + Math.sqrt(formulla)) / (2*a);
            x2 = (-b - Math.sqrt(formulla)) / (2*a);
            System.out.println("Root are Real and Different");
            System.out.print("X1 = " + x1 + "\nX2 = " + x2);
        }
        else if(formulla == 0)
        {
            System.out.println("Roots are Real and Same");
            x1 = (-b / (2*a));
            System.out.println("X1 = X2 = " + x1);
        }
        else {
            double realRoot = (-b / (2*a));
            double imageryRoot = Math.sqrt(-formulla) / (2*a);
            System.out.println("X1 = " + realRoot + imageryRoot + "i");
            System.out.println("X2 = " + realRoot + imageryRoot + "i");
        }

        System.out.print("\nName: Aasim Ashraf");
        System.out.print("\nRoll No: CSE-20-LE-63");
    }
}
