class Animal {
    void Display() {
        System.out.println("I am an animal");
    }
}

class Dog extends Animal {
    void Display() {
        System.out.println("I am a dog");
    }

    void Print() {
        Display(); // Calls Display() of Dog class
        super.Display();  // Calls Display() of Animal class
    }
}

public class SuperKeyword {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.Print();
    }
}
