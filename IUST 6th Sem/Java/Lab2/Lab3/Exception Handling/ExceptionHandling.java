import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {
            int [] arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            System.out.print("Enter the Index of Array ");
            int b = sc.nextInt();
            System.out.println(arr[b]);
        }
        catch (Exception e) {
            System.out.println("Exception thrown  :" + e);
        }
    }
}
