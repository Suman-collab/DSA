import java.util.*;
class rect{
    int l,b;
    rect(int l,int b){
        this.l=l;
        this.b=b;
        System.out.println("Area of rectangle is "+(l*b));
    }
    void display(){
        System.out.print("The Area of the rectangle is "+(l*b));
        System.out.print("The Perimeter of the rectangle is "+(2*(l+b)));
    }
}
public class rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of the rectangle:");
        int l = sc.nextInt();
        System.out.print("Enter the breadth of the rectangle:");
        int b = sc.nextInt();
        rect r = new rect(l, b);
        r.display();
    }
}
