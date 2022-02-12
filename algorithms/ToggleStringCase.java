package algorithms;
import java.util.*;
//import java.io.*;
public class ToggleStringCase {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int tc = 1;
            boolean getTestCases = false;
            if (getTestCases) {
                tc = sc.nextInt();
                sc.nextLine();
            }
            while (sc.hasNext() && tc != 0) {
                String str = sc.nextLine();
                char[] toggled = new char[str.length()];
                for (int i = 0; i < str.length(); i++) {
                    char c = str.charAt(i);
                    if (Character.isUpperCase(c)) {
                        c = Character.toLowerCase(c);
                    }
                    else {
                        c = Character.toUpperCase(c);
                    }
                    toggled[i] = c;
                }
                System.out.println(new String(toggled));
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