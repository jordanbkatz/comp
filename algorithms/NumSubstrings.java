package algorithms;
import java.util.*;
//import java.io.*;
public class NumSubstrings {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int ntc = 1;
            ntc = getNumTestCases(sc);
            while (sc.hasNext() && ntc != 0) {
                String str = sc.nextLine();
                System.out.println(numSubstrings(str));
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
    private static int numSubstrings(String str) {
        int n = str.length();
        return (n * (n + 1)) / 2;
    }
    private static int getNumTestCases(Scanner sc) {
        int ntc = sc.nextInt();
        sc.nextLine();
        return ntc;
    }
}