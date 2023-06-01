import java.util.Scanner;
public class FiboSeries {

    // Name : Aasim Ashraf
    // Roll No: CSE-20-LE-63

    public static int Fib(int n)
    {
        if(n == 0)
            return 0;
        else if( n == 1 || n == 2)
            return 1;
        else
            return (Fib(n-1) + Fib(n-2));
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int num = sc.nextInt();

        for(int i = 0; i <= num; i++){
            System.out.print(Fib(i) + " ");
        }
        System.out.print("\nName : Aasim Ashraf");
        System.out.print("\nRoll No : CSE-20-63");
    }
}
