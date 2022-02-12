import java.util.*;
//import java.io.*;
public class ReverseString {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            int t = s.nextInt();
            s.nextLine();
            String[] in = new String[t];
            String[] out = new String[t];
            for (int i = 0; i < in.length; i++) {
                in[i] = s.nextLine();
                out[i] = reverseString(in[i]);
            }
            for (int j = 0; j < out.length; j++) {
                System.out.println(out[j]);
            }
        }
        catch (Exception e) {
            System.out.println("Uncaught Exception: " + e);
        }
        finally {
            s.close();
        }
    }
    private static String reverseString(String in) {
        char[] out = new char[in.length()];
        for (int i = 0; i < out.length; i++) {
            out[out.length - i - 1] = in.charAt(i);
        }
        return new String(out);
    }
}