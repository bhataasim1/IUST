import java.util.Scanner;

public class ReplaceSpaces {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String str = sc.nextLine();
        System.out.println("String with Multiple Spaces : " + str);
        System.out.println("String with single Spaces : " + str.replaceAll("( )+", " "));
    }       
}
