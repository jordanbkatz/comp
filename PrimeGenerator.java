import java.util.*;
//import java.io.*;
public class PrimeGenerator {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            HashMap<String, Integer> range = new HashMap<String, Integer>();
            System.out.print("Min: ");
            range.put("min", s.nextInt());
            s.nextLine();
            System.out.print("Max: ");
            range.put("max", s.nextInt());
            s.nextLine();
            ArrayList<Integer> primes = new ArrayList<Integer>();
            boolean isPrime;
            for (int i = Math.max(2, range.get("min")); i < range.get("max"); i++) {
                isPrime = true;
                for (int j = 2; j < i - 1; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                    }
                }
                if (isPrime == true) {
                    primes.add(i);
                }
            }
            for (int i = 0; i < primes.size(); i++) {
                System.out.println(primes.get(i));
            }
        }
        catch (Exception e) {
            System.out.println("Uncaught Exception: " + e);
        }
        finally {
            s.close();
        }
    }
}