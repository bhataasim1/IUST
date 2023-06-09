class Animal {
    String name;
    public void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    public void bark() {
        System.out.println("Dog name is " + name);
    }
}

public class Inheritence { 
    public static void main(String[] args) {
        Dog d = new Dog();
        d.name = "Tommy";
        d.bark();
        d.eat();
    }
}
