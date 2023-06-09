import java.util.Scanner;
public class LetterTemplate {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        String name = sc.nextLine();
        System.out.println("Dear " + name);
    }
}
