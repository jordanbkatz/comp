package algorithms;
import java.util.*;
public class NumSubstrings {
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
        String str = sc.nextLine();
        int l = str.length();
        int n = (l * (l + 1)) / 2;
        System.out.println(n);
    }
    private static int getNumTestCases(Scanner sc, boolean ask) {
        return (ask) ? Integer.parseInt(sc.nextLine()) : 1;
    }
}