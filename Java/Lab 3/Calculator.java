public class Calculator {
    public static void main(String[] args) {
        double a=Double.parseDouble(args[0]);
        double b=Double.parseDouble(args[2]);
        switch(args[1]){
            case "+":
            System.out.println(a+"+"+b+"="+(a+b));
            break;
            case "-":
            System.out.println(a+"-"+b+"="+(a-b));
            break;
            case "*":
            System.out.println(a+"*"+b+"="+(a*b));
            break;
            case "/":
            System.out.println(a+"/"+b+"="+(a/b));
            break;
            case "%":
            System.out.println(a+"%"+b+"="+(a%b));
            break;
            default:
            System.out.println("Invalid operator");
        }
    }
}
