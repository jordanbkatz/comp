package algorithms;
import java.util.*;
public class ToggleStringCases {
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
        char[] toggled = new char[str.length()];
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (Character.isUpperCase(c)) {
                c = Character.toLowerCase(c);
            }
            else {
                c = Character.toUpperCase(c);
            }
            toggled[i] = c;
        }
        System.out.println(new String(toggled));
    }
    private static int getNumTestCases(Scanner sc, boolean ask) {
        return (ask) ? Integer.parseInt(sc.nextLine()) : 1;
    }
}