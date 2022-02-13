package algorithms;
import java.util.*;
public class GeneratePrimes {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int tcn = getNumTestCases(sc, true);
            while (sc.hasNext() && tcn != 0) {
                solve(sc, tcn);
                tcn--;
            }
        }
        catch (Exception e) {
            System.out.println("Something went wrong: " + e);
        }
        finally {
            sc.close();
        }
    }
    private static void solve(Scanner sc, int tcn) {
        int min = sc.nextInt();
        int max = sc.nextInt();
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
        for (int i = 0; i < primes.size(); i++) {
            System.out.println(primes.get(i));
        }
    }
    private static int getNumTestCases(Scanner sc, boolean ask) {
        return (ask) ? Integer.parseInt(sc.nextLine()) : 1;
    }
}