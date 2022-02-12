package algorithms;
import java.util.*;
//import java.io.*;
public class ReverseString {
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
                char[] reversed = new char[str.length()];
                for (int i = 0; i < reversed.length; i++) {
                    reversed[reversed.length - i - 1] = str.charAt(i);
                }
                System.out.println(new String(reversed));
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