import java.util.Scanner;
public class fibonacchi {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int a=0,b=1,c;
        System.out.println("Fibonacchi Series : ");
        System.out.print(a+" "+b);
        for(int i = 1; i <= num; i++){
            c=a+b;
            System.out.print(" "+c);
            a=b;
            b=c;
        }
        System.out.print("\nName : Aasim Ashraf");
        System.out.println("Roll No : CSE-20-63");
    }
}
