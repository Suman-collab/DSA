import java.util.*;
public class area_of_circle {
    public static void main(String arags[]){
        Scanner key = new Scanner(System.in);
        System.out.print("Enter the radius of the circle:");
        double r = key.nextDouble();
        double area = 3.14 * r * r ;
        System.out.println("The area of the circle is " + area);
        key.close();
    }
}
