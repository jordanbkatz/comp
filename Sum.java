import java.util.*;
//import java.io.*;
public class Sum {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            int t = s.nextInt();
            s.nextLine();
            int n = s.nextInt();
            s.nextLine();
            int[][] in = new int[t][n];
            int[] out = new int[t];
            for (int i = 0; i < in.length; i++) {
                for (int j = 0; j < n; j++) {
                    in[i][j] = s.nextInt();
                    s.nextLine();
                }
                out[i] = sum(in[i]);
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
    private static int sum(int[] in) {
        int out = 0;
        for (int i = 0; i < in.length; i++) {
            out += in[i];
        }
        return out;
    }
}