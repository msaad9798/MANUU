import java.util.*;
public class CompoundInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of principle: ");
        double p = sc.nextDouble();
        System.out.print("Enter the value of rate: ");
        double r = sc.nextDouble();
        System.out.print("Enter the value of time: ");
        double t = sc.nextDouble();
        double ci = p*(Math.pow(1+r/100, t));
        System.out.println("Compound Interest is: "+ci);
        sc.close();
    }
}