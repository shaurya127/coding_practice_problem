import java.util.*;

public class Question_8 {
    static List<String> al = new ArrayList<>();

    private static void findsubsequences(String s, String ans) {
        if (s.length() == 0) {
            al.add(ans);
            return;
        }
        findsubsequences(s.substring(1), ans + s.charAt(0));
        findsubsequences(s.substring(1), ans);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str;
        System.out.print("Enter the string: ");
        str=sc.next();
        findsubsequences(str,"");
        System.out.println(al);
        sc.close();
    }
}