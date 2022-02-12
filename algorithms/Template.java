package algorithms;
import java.util.*;
//import java.io.*;
public class Template {
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
                int in = sc.nextInt();
                int out = in;
                System.out.println(out);
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