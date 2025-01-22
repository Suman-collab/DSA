import java.util.*;
public class gcd {
    public static int gcd(int n, int m) {
        if (m == 0) {
            return n;
        }
        if(n==0){
            return m;
        }
        else{
            return gcd(m,n%m);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int n = sc.nextInt();
        System.out.print("Enter the second number: ");
        int m = sc.nextInt();
        int result = gcd(n, m);
        System.out.println("the GCD of " + n + " and " + m + " is " + result);
    }
}
