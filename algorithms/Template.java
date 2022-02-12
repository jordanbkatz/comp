package algorithms;
import java.util.*;
//import java.io.*;
public class Template {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int ntc = 1;
            ntc = getNumTestCases(sc);
            while (sc.hasNext() && ntc != 0) {
                int in = sc.nextInt();
                System.out.println(algorithm(in));
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
    private static int algorithm(int in) {
        int out = in;
        return out;
    }
    private static int getNumTestCases(Scanner sc) {
        int ntc = sc.nextInt();
        sc.nextLine();
        return ntc;
    }
}