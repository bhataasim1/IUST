import java.util.Scanner;

public class StringToLowerCase {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        //String s = "I AM STRING";
        System.out.println(str);
        System.out.println(str.toLowerCase());
    }
}
