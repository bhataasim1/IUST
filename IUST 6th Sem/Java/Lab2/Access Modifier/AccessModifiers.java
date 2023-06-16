class Priv {
    private String name;

    public void Getter(){
        System.out.println(name);
    }

    public void Setter(String name) {
        this.name = name;
    }

}

class Protec extends Priv {
    protected int age = 20;

    void display() {
        System.out.println("Age = " + age);
    }
}

class Defau extends Protec {
    int sem = 6;

    void display1() {
        System.out.println("Semester = " + sem);
    }
}

public class AccessModifiers {
    public static void main(String[] args) {
        
        // Protec AM = new Protec();
        Defau AM = new Defau();

        AM.Setter("Aasim");
        AM.Getter();
        AM.display();
        AM.display1();
    }
    
}
