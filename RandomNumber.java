import java.util.random.*;
import java.util.Scanner;
public class RandomNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the range of value wants to print random number: ");
        System.out.println("Enter the minimum range: ");
        int min = sc.nextInt();
        System.out.println("Enter the maximum range: ");
        int max = sc.nextInt();
        int a = (int) (Math.random()*(max-min+1)+min);
        System.out.println("Random number between "+min+" to "+max+" is: "+a);
        sc.close();
    }
}
