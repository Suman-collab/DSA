import java.util.*;
public class StringCom {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter 1st string: ");
        String s1=sc.nextLine();
        System.out.print("Enter 1st string: ");
        String s2=sc.nextLine();
        while(true){
            System.err.println("1.Equals Operator\n2.== Operator\n3.Comparator Operator\n4.Exit");
            System.out.print("Entre the Choice:");
            int ch=sc.nextInt();
            switch(ch){
                case 1:
                    System.out.println(s1.equals(s2));
                    break;
                case 2:
                    System.out.println(s1==s2);
                    break;
                case 3:
                    System.out.println(s1.compareTo(s2));
                    break;
                case 4:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid Choice");
            }

        }
    }
}
