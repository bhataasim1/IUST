import java.util.ArrayList;

class Array_List {
    public static void main(String[] args) {
        ArrayList<String> Language = new ArrayList<>();
        Language.add("Java");
        Language.add("C++");
        Language.add("Python");
        System.out.println(Language);

        //Accessing Particular Element in Array List
        System.out.println(Language.get(1));        //Way 1
        
        String str = Language.get(2); // Way 2
        System.out.println(str);

        //Change Array List Element
        Language.set(1, "C");
        System.out.println(Language);

        //Remove Element from Array List
        Language.remove(2);
        System.out.println(Language);
    }
}