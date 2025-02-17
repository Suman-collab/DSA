import java.util.*;
class student{
    String name;
    int age;
    int roll;
    student(String n,int a){
        name=n;
        age=a;
    }
    student(String n,int a,int r){
        name=n;
        age=a;
        roll=r;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
    }
    void display1(){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Roll: "+roll);
    }
}
public class overload {
    public static void main(String[] args) {
        String name;
        int roll;
        int age;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the name of student:");
        name=sc.next();
        System.out.print("Enter the age of student:");
        age=sc.nextInt();
        System.out.print("Enter the roll number of student:");
        roll=sc.nextInt();
        student s=new student(name,age);
        student s1=new student(name, age,roll);
        while (true) {
            System.out.print("1.Student roll,name\n2.Student name,age,roll\n3.exit\n");
            System.out.print("Enter your choice:");
            int ch=sc.nextInt();
            switch (ch) {
                case 1:
                    s.display();
                    break;
                case 2:
                    s1.display1();
                    break;
                case 3:
                    System.exit(0);
            }
        }
    }
}
