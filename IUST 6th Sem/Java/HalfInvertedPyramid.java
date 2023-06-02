import java.util.Scanner;

public class HalfInvertedPyramid {
    
    // Name : Aasim Ashraf
    // Roll No: CSE-20-LE-63

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the Number of Rows : ");
        int rows = sc.nextInt();
        
        for(int i = rows; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++){
                System.out.print(" * ");
            }

            System.out.println("\n");
        }
        System.out.print("\nName : Aasim Ashraf");
        System.out.print("\nRoll No : CSE-20-63");
    }
}
