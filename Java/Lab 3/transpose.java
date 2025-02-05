import java.util.*;
public class transpose {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m,n;
        System.out.print("Enter the number of rows in the matrix: ");
        m = sc.nextInt();
        System.out.print("Enter the number of columns in the matrix: ");
        n = sc.nextInt();
        int[][] arr = new int[m][n];
        System.out.println("Enter the elements of the matrix: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("The matrix is: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j] + " ");
            }
                System.out.println();
        }
        System.out.println("The transpose of the matrix is: ");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[j][i] + " ");
            }
            System.out.println();
        }
    }
}
