package algorithms;
import java.util.*;
//import java.io.*;
public class Substrings {
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
                String str = sc.nextLine();
                int n = str.length();
                System.out.println((n * (n + 1)) / 2);
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