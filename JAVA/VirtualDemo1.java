class Base {
    public int i, j;

}

class Derived extends Base {
    public int x;
}

public class VirtualDemo1 {
    public static void main(String[] args) {
        Base bp1 = new Base();        // No casting

        Base bp2 = new Derived();     // Upcasting (implicit, allowed)

        Derived dp1 = new Derived();  // No casting

        // Derived dp2 = new Base();  // Downcasting - Compile-time error in Java
                                      
    }
}