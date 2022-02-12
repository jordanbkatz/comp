import java.util.*;
//import java.io.*;
public class Template {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            int t = s.nextInt();
            s.nextLine();
            int[] in = new int[t];
            int[] out = new int[t];
            for (int i = 0; i < in.length; i++) {
                in[i] = s.nextInt();
                out[i] = algorithm(in[i]);
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
    private static int algorithm(int in) {
        int out = in;
        return out;
    }
}