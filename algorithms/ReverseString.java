package algorithms;
import java.util.*;
//import java.io.*;
public class ReverseString {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int ntc = 1;
            ntc = getNumTestCases(sc);
            while (sc.hasNext() && ntc != 0) {
                String str = sc.nextLine();
                System.out.println(reverseString(str));
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
    private static String reverseString(String str) {
        char[] reversed = new char[str.length()];
        for (int i = 0; i < reversed.length; i++) {
            reversed[reversed.length - i - 1] = str.charAt(i);
        }
        return new String(reversed);
    }
    private static int getNumTestCases(Scanner sc) {
        int ntc = sc.nextInt();
        sc.nextLine();
        return ntc;
    }
}