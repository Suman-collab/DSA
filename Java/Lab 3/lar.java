import java.util.*;
public class lar{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.err.print("Enter the Elements:");
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println("The Largest Element in the Array is: " + max);
    }
}