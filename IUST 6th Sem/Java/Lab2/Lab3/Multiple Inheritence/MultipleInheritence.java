interface MovieName {
    public void disp(String name);
}

interface MovieActor {
    public void dispActor(String ActName);
}

class IronMan implements MovieName, MovieActor {
    public void disp(String name) {
        System.out.println("Name of Movie = " + name);
    }

    public void dispActor(String ActName) {
        System.out.println("Actor Name = " + ActName);
    }
}

public class MultipleInheritence {
    public static void main(String[] args) {
        IronMan obj = new IronMan();
        obj.disp("Iron Man 1");
        obj.dispActor("Tony Stark");

        System.out.println("Name: Aasim Ashraf ");
        System.out.println("Roll No: CSE-20-LE-63");
    }
}
