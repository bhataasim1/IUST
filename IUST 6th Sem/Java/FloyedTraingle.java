import java.util.Scanner;
public class FloyedTraingle {

    // Name : Aasim Ashraf
    // Roll No: CSE-20-LE-63
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        int num = 1;

        for(int i = 1; i<= rows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
        System.out.print("\nName : Aasim Ashraf");
        System.out.print("\nRoll No: CSE-20-LE-63");
    }
}
