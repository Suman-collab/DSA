class sal {
    double grossSalary;
    double basePay;
    double hra;
    double da;
    double pf;

    public sal(double grossSalary, double basePay, double hra, double da, double pf) {
        this.grossSalary = grossSalary;
        this.basePay = basePay;
        this.hra = hra;
        this.da = da;
        this.pf = pf;
    }

    public double calculateNetSalary() {
        return grossSalary - pf;
    }

    public void displayEmployeeDetails() {
        System.out.println("Employee Gross Salary: " + grossSalary);
        System.out.println("Employee Base Pay: " + basePay);
        System.out.println("House Rent Allowance (HRA): " + hra);
        System.out.println("Dearness Allowance (DA): " + da);
        System.out.println("Provident Fund (PF): " + pf);
    }

    public static void main(String[] args) {
        sal emp = new sal(50000, 30000, 10000, 5000, 5000);
        emp.displayEmployeeDetails();
        double netSalary = emp.calculateNetSalary();
        System.out.println("Net Salary: " + netSalary);
    }
}
