import java.util.*;
//import java.io.*;
public class ReverseString {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("String: ");
            String str = s.nextLine();
            char[] reversed = new char[str.length()];
            for (int i = 0; i < reversed.length; i++) {
                reversed[reversed.length - i - 1] = str.charAt(i);
            }
            System.out.println(new String(reversed));
        }
        catch (Exception e) {
            System.out.println("Uncaught Exception: " + e);
        }
        finally {
            s.close();
        }
    }
}