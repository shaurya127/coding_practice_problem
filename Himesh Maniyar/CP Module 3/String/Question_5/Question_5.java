import java.util.*;

public class Question_5 {
    public static String makeGood(String S) {
        Stack stack = new Stack<>();
        for (int i = 0; i < S.length(); i++) {
            char c = S.charAt(i);
            if (stack.empty())
                stack.push(c);
            else {
                char p = (char) stack.peek();
                if (Math.abs(p - c) == 32)
                    stack.pop();
                else
                    stack.push(c);
            }
        }
        StringBuilder ss = new StringBuilder("");
        while (!stack.empty())
            ss.append(stack.pop());
        return ss.reverse().toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        System.out.print("Enter the string: ");
        s = sc.nextLine();
        System.out.println("The final string is: " + makeGood(s));
        sc.close();
    }
}