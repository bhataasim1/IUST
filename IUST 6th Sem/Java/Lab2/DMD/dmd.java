class Animal {
    void display(){
        System.out.print("I am Animal Class");
    }
}

class Cat extends Animal {
    void display(){
        System.out.print("i am Cat Class");
    }
    void Breed() {
        System.out.println("i am Kashmiri Cat");
    }
}
public class dmd {
    public static void main(String[] args) {
        Animal s = new Cat();    // This is Dynamic Method Dispatch
        s.display();
        // s.Breed(); // Not Allowed
    }
    
}
