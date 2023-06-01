import java.util.Scanner;
public class Tax {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your income: ");
        float income = sc.nextFloat();

        float tax = 0f;

        if(income < 250000)
            tax = 0f;
        else if(income > 250000 && income < 500000)
        {
            tax += (income - 250000) * 0.05;
        }
        else if(income > 500000 && income < 1000000)
        {
            tax += (income - 500000) * 0.2;
            tax += 250000 * 0.05;
        }
        else if(income > 1000000)
        {
            tax += (income - 1000000) * 0.3;
            tax += 500000 * 0.2;
            tax += 250000 * 0.05;
        }

        System.out.print("Tax to be Paid : " + tax);
    }
}
