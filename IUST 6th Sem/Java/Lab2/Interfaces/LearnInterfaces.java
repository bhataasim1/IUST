interface CSE {
    void getDetails(String name, int age);
}

interface Staff {
    void display(double salery);
}

class Student implements CSE {
    public void getDetails(String name, int age) {
        System.out.println("Name: " + name + "\nAge: " + age);
    }
}

class Faculty implements CSE, Staff {
    public void getDetails(String name, int age) {
        System.out.println("Name: " + name + "\nAge: " + age);
    }

    public void display(double salery) {
        System.out.println("Salery: " + salery);
    }
}

public class LearnInterfaces {
    public static void main(String[] args) {
        
        Student s = new Student();
        s.getDetails("Aasim", 20);
        
        Faculty f = new Faculty();
        f.getDetails("Ali", 25);
        f.display(50000.0);
    }
    
}
