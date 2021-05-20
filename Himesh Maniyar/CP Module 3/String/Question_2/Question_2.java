import java.util.*;

public class Question_2 {

    public static int isPalindrome(String s) {
        int isPalindrome = 0;
        int middleCharIndex = s.length() % 2 == 0 ? s.length() / 2 : (s.length() - 1) / 2;
        for (int i = 0; i < middleCharIndex; ++i) {
            if (s.charAt(i) != s.charAt(s.length() - 1-i)) {
                isPalindrome = -1;
                break;
            }
        }
        return isPalindrome;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;
        System.out.print("Enter the string: ");
        s=sc.nextLine();
        System.out.println(isPalindrome(s)==0?"S is a palindrome":"S is not a palindrome");
        sc.close();
    }
}
