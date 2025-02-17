import java.util.*;
class emp{
    int id;
    String name;
    int salary;
    emp(int id,String name,int salary){
        this.id=id;
        this.name=name;
        this.salary=salary;
    }
    void display(){
        System.out.println("Employee ID: "+id);
        System.out.println("Employee Name: "+name);
        System.out.println("Employee Salary: "+salary);
    }
}
public class employee {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of employees:");
        int n=sc.nextInt();
        emp e[]=new emp[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter the ID of employee "+(i+1)+":");
            int id=sc.nextInt();
            System.out.print("Enter the Name of employee "+(i+1)+":");
            String name=sc.next();
            System.out.print("Enter the salary of employee "+(i+1)+":");
            int salary=sc.nextInt();
            e[i]=new emp(id,name,salary);
        }
        for(int i=0;i<n;i++){
            System.out.println("Details of employee "+(i+1)+":");
            e[i].display();
        }
    }
}
