import java.util.*;
//import java.io.*;
public class Sum {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
            HashMap<Character, Integer> nums = new HashMap<Character, Integer>();
            System.out.print("Num A: ");
            nums.put('a', s.nextInt());
            s.nextLine();
            System.out.print("Num B: ");
            nums.put('b', s.nextInt());
            s.nextLine();
            System.out.println(nums.get('a') + nums.get('b'));
        }
        catch (Exception e) {
            System.out.println("Uncaught Exception: " + e);
        }
        finally {
            s.close();
        }
    }
}