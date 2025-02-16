import java.util.*;
public class no_of_word {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String: ");
        String s=sc.nextLine();
        String[] words=s.split(" ");
        System.out.println("Number of words: "+words.length);
    }
}
