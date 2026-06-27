
class Point {
    private int x;
    private int y;
    public Point() {
        this.x = 0;
        this.y = 0;
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void setX(int x) {
        this.x = x;
    }
    public void setY(int y) {
        this.y = y;
    }
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void display() {
        System.out.println("Point coordinates: (" + x + ", " + y + ")");
    }
}

public class MainPoint {
    public static void main(String[] args) {
        Point p1 = new Point();
        System.out.print("p1 initial: ");
        p1.display();
        p1.setX(5);
        p1.setY(10);
        System.out.print("p1 after setX and setY: ");
        p1.display();
        Point p2 = new Point(20, 30);
        System.out.print("p2 initial: ");
        p2.display();
        p2.setXY(40, 50);
        System.out.print("p2 after setXY: ");
        p2.display();
    }
}