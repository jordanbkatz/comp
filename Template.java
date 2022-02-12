import java.util.*;
//import java.io.*;
public class Template {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("Input: ");
            int in = s.nextInt();
            s.nextLine();
            int out = in;
            System.out.println(out);
        }
        catch (Exception e) {
            System.out.println("Uncaught Exception: " + e);
        }
        finally {
            s.close();
        }
    }
}