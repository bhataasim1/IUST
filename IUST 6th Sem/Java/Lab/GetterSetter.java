public class GetterSetter {
    String name;
    int age;

    //Setter Function
    public void setName(String name, int age) {
        this.name = name;
        this.age = age;
    }

    //Getter Function
    public void getName() {
        System.out.println("Name: " + name + ", Age: " + age);
    }

    public static void main(String[] args) {
        GetterSetter gs = new GetterSetter();

        gs.setName("Aasim", 20);
        gs.getName();

        System.out.println("\nName: Aasim Ashraf");
        System.out.println("Roll No: CSE-20-LE-63");
    }
}
