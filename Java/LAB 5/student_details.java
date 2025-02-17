import java.util.*;
class student{
    String name;
    int roll;
    int marks;
    student(String n,int r,int m){
        name=n;
        roll=r;
        marks=m;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll: "+roll);
        System.out.println("Marks: "+marks);
    }
}
public class student_details{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of students:");
        int n=sc.nextInt();
        student s[]=new student[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter the name of student "+(i+1)+":");
            String name=sc.next();
            System.out.print("Enter the roll of student "+(i+1)+":");
            int roll=sc.nextInt();
            System.out.print("Enter the marks of student "+(i+1)+":");
            int marks=sc.nextInt();
            s[i]=new student(name,roll,marks);
        }
        for(int i=0;i<n;i++){
            System.out.println("Details of student "+(i+1)+":");
            s[i].display();
        }
    }
}
