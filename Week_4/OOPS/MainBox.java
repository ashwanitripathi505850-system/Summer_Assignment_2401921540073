
class Box {
    protected double length;
    protected double breadth;
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double findArea() {
        return length * breadth;
    }
}
class Box3d extends Box {
    private double height;
    public Box3d(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }
    public double findVolume() {
        return findArea() * height;
    }
}

public class MainBox {
    public static void main(String[] args) {
        Box3d box = new Box3d(5.0, 4.0, 3.0);
        System.out.println("--- Box Dimensions ---");
        System.out.println("Length: " + box.length);
        System.out.println("Breadth: " + box.breadth);
        System.out.println("Base Area: " + box.findArea());
        System.out.println("Total Volume: " + box.findVolume());
    }
}
