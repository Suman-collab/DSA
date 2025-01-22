import java.util.*;

public class StudentDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the student details:");
        System.out.print("Enter the student name: ");
        String name = sc.nextLine();
        System.out.print("Enter the student age: ");
        int age = sc.nextInt();
        System.out.print("Enter the student CGPA: ");
        float cgpa = sc.nextFloat();
        sc.nextLine(); // consume the leftover newline character
        System.out.print("Enter the student address: ");
        String add = sc.nextLine();
        System.out.println("Student Details");
        System.out.println("Student name: " + name);
        System.out.println("Student age: " + age);
        System.out.println("Student CGPA: " + cgpa);
        System.out.println("Student address: " + add);
        sc.close();
    }
}
