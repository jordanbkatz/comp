package algorithms;
import java.util.*;
//import java.io.*;
public class GeneratePrimes {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int ntc = 1;
            ntc = getNumTestCases(sc);
            while (sc.hasNext() && ntc != 0) {
                int min = sc.nextInt();
                int max = sc.nextInt();
                ArrayList<Integer> primes = generatePrimes(min, max);
                for (int i = 0; i < primes.size(); i++) {
                    System.out.println(primes.get(i));
                }
                ntc--;
            }
        }
        catch (Exception e) {
            System.out.println("Exception: " + e);
        }
        finally {
            sc.close();
        }
    }
    private static ArrayList<Integer> generatePrimes(int min, int max) {
        ArrayList<Integer> primes = new ArrayList<Integer>();
        for (int i = Math.max(2, min); i < max; i++) {
            boolean isPrime = true;
            for (int j = 2; j < i - 1; j++) {
                if (i % j == 0) {
                    isPrime = false;
                }
            }
            if (isPrime) {
                primes.add(i);
            }
        }
        return primes;
    }
    private static int getNumTestCases(Scanner sc) {
        int ntc = sc.nextInt();
        sc.nextLine();
        return ntc;
    }
}