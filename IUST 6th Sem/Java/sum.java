import java.util.Scanner;

class sum
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter First Number: ");
        int num1 = input.nextInt();

        System.out.print("Enter Second Number: ");
        int num2 = input.nextInt();

        int add = num1 + num2;
        System.out.println("Sum = " + add);

        input.close();
    }
}