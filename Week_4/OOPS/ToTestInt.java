
interface Test {
    int square(int num);
}
class Arithmetic implements Test {
    @Override
    public int square(int num) {
        return num * num;
    }
}
public class ToTestInt {
    public static void main(String[] args) {
  
        Arithmetic obj = new Arithmetic();
        
        int number = 5;
        int result = obj.square(number);
        
        System.out.println("The square of " + number + " is: " + result);
    }
}
