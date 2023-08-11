import java.util.Set;
import java.util.HashSet;
public class Java_Sets {
    public static void main(String[] args) {
        Set<Integer> Set1 = new HashSet<>();
        Set1.add(1);
        Set1.add(2);
        Set1.add(3);

        Set<Integer> Set2 = new HashSet<>();
        Set2.add(3);
        Set2.add(4);
        Set2.add(5);

        // Set2.addAll(Set1);
        // System.out.println("Set2: " + Set2);

        // Union
        Set<Integer> Union = new HashSet<>(Set1);
        Union.addAll(Set2);
        System.out.println("Union: " + Union);

        // Intersection
        Set<Integer> Intersection = new HashSet<>(Set1);
        Intersection.retainAll(Set2);
        System.out.println("Intersection: " + Intersection);
    }
}
