import java.util.LinkedList;

public class Linked_List {
    public static void main(String[] args) {
        LinkedList<String> Animals = new LinkedList<String>();
        Animals.add("Dog");
        Animals.add("Cat");
        Animals.add("Cow");
        Animals.add("Horse");
        Animals.add("Lion");
        System.out.println(Animals);

        // Adding an element at the specific position
        Animals.addFirst("Tiger");     // Add Element at the first position
        System.out.println(Animals);

        Animals.addLast("Elephant");   // Add Element at the last position
        System.out.println(Animals);

        Animals.add(2, "Monkey");      // Add Element at the specific position
        System.out.println(Animals);

        // Accessing an element
        System.out.println(Animals.get(3));

        // Changing an element in Linked List
        Animals.set(3, "Giraffe");
        System.out.println(Animals);

        // Removing an element
        Animals.remove(3);
        System.out.println(Animals);
    }
}
