abstract class AbstractClass {
    public abstract void StdDetails(String name, int roll);

    public void display(String Department) {
        System.out.println("Department: " + Department);
    }
}

interface InterFaceTest {
    public void Fees(double fee);
}

class Student extends AbstractClass implements InterFaceTest {
    public void StdDetails(String name, int roll) {
        System.out.println("Name: " + name + "\nRoll: " + roll);
    }

    public void Fees(double fee) {
        System.out.println("Fees: " + fee);
    }
}

public class AbstractInterface {
    public static void main(String[] args) {
        Student s = new Student();
        s.StdDetails("Aasim Ashraf", 63);
        s.display("Computer Science");
        s.Fees(31000);
    }
}
