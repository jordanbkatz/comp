package algorithms;
import java.util.*;
//import java.io.*;
public class PrimeGenerator {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int tc = 1;
            boolean getTestCases = true;
            if (getTestCases) {
                tc = sc.nextInt();
                sc.nextLine();
            }
            while (sc.hasNext() && tc != 0) {
                int min = sc.nextInt();
                int max = sc.nextInt();
                ArrayList<Integer> primes = new ArrayList<Integer>();
                boolean isPrime;
                for (int i = Math.max(2, min); i < max; i++) {
                    isPrime = true;
                    for (int j = 2; j < i - 1; j++) {
                        if (i % j == 0) {
                            isPrime = false;
                        }
                    }
                    if (isPrime) {
                        primes.add(i);
                    }
                }
                for (int i = 0; i < primes.size(); i++) {
                    System.out.println(primes.get(i));
                }
                tc--;
            }
        }
        catch (Exception e) {
            System.out.println("Exception: " + e);
        }
        finally {
            sc.close();
        }
    }
}