import java.util.Scanner;

class SampleException extends Exception {
    public String toString() {
        return ("i am toString Method");
    }
    public String getMessage() {
        return ("i am getMessage Method");
    }
}

public class ThrowUserDefined {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Number between 1 - 10 : ");
        int a = sc.nextInt();

        try {
            if(a > 10) {
                throw new SampleException();
            }
        }
        catch(SampleException se) {
            System.out.println(se.toString());
            System.out.println(se.getMessage());
        }
        finally {
            System.out.println("This is Finally Block");
        }
    }
}
