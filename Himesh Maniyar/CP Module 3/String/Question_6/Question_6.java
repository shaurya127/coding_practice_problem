import java.util.*;

public class Question_6{

    public static String countAndSay(int n) {
        if (n == 1) return "1";
        
        String prevString = countAndSay(n-1);
        
        String sb = new String();
        int count = 1;
        char curr = prevString.charAt(0);
        
        for (int i = 1; i < prevString.length(); i++) {
            if (curr == prevString.charAt(i)) {
                count++; 
            } else {
                sb+=String.valueOf(count);
                sb+=curr;
                curr = prevString.charAt(i);
                count = 1;
            }
        }
        
        if (count > 0) {
            sb+=String.valueOf(count);
            sb+=curr;
        }
        
        return sb;
    }
    public static void main(String[] args) {
        int x;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number: ");
        x=sc.nextInt();
        System.out.println("The manipulated string is: "+countAndSay(x));
        sc.close();
    }
}