import java.util.*;
public class area_perimeter {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of the rectangle:");
        int l = sc.nextInt();
        System.out.print("Enter the breadth of the rectangle:");
        int b = sc.nextInt();
        int area = l * b;
        int perimeter = 2 * (l + b);
        System.out.println("The area of the rectangle is " + area);
        System.out.println("The perimeter of the rectangle is " + perimeter);
    }
}
