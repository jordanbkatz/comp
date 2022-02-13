package algorithms;
import java.util.*;
public class ReverseString {
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
        char[] reversed = new char[str.length()];
        for (int i = 0; i < reversed.length; i++) {
            reversed[reversed.length - i - 1] = str.charAt(i);
        }
        System.out.println(new String(reversed));
    }
    private static int getNumTestCases(Scanner sc, boolean ask) {
        return (ask) ? Integer.parseInt(sc.nextLine()) : 1;
    }
}