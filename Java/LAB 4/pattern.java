import java.util.*;
public class pattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String: ");
        String str=sc.nextLine();
        for(int i=0;i<str.length();i++){
            System.out.println(str.substring(i));
        }
    }
}
