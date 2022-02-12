package algorithms;
import java.util.*;
//import java.io.*;
public class ToggleStringCases {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int ntc = 1;
            ntc = getNumTestCases(sc);
            while (sc.hasNext() && ntc != 0) {
                String str = sc.nextLine();
                System.out.println(toggleStringCases(str));
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
    private static String toggleStringCases(String str) {
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
        return new String(toggled);
    }
    private static int getNumTestCases(Scanner sc) {
        int ntc = sc.nextInt();
        sc.nextLine();
        return ntc;
    }
}