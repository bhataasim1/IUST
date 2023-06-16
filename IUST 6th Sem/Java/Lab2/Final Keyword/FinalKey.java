final class A {
    void disp(){
        System.out.println("I am Class with Final Keyword. No one can Inherit me!!");
    }
}

class B {
    final void show() {
        System.out.println("I am a method, No one can Override me");
    } 
}

public class FinalKey {
    public static void main(String[] args) {
        final int a = 10;

        //a = 20;   // Can not Re-assign the Value because of 'final' keyword. 

        System.out.println(a);
    }
    
}
