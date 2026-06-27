

class Outer {
    void display() {
        System.out.println("Outer class display");
    }

    class Inner {
        void display() {
            System.out.println("Inner class display");
        }
    }
}

public class MainClass {
    public static void main(String[] args) {
        
        Outer outerObj = new Outer();
        outerObj.display();

        
        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display();
    }
}