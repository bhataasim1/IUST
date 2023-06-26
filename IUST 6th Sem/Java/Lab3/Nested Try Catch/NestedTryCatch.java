import java.util.Scanner;

public class NestedTryCatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int [] arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        try {
            System.out.print("Enter the Index of Array ");
            int a = sc.nextInt();

            System.out.print("Enter the Number to Divide the Array Element ");
            int b = sc.nextInt();

            try {
                System.out.println(arr[a] / b);
            }
            catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Exception thrown  :" + e);
            }
        }
        catch (Exception e2) {
            System.out.println("Exception thrown  :" + e2);
        }
    }
}
