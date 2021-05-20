import java.util.*;

public class Question_3 {

    public static int isPangram(String s){
        boolean[] mark = new boolean[26];
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            if ('A' <= s.charAt(i) && s.charAt(i) <= 'Z')
                index = s.charAt(i) - 'A';
            else if ('a' <= s.charAt(i) && s.charAt(i) <= 'z')
                index = s.charAt(i) - 'a';
            else
                continue;
            mark[index] = true;
        }
        for (int i = 0; i <= 25; i++)
            if (mark[i] != true)
                return -1;
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;
        System.out.print("Enter the string: ");
        s=sc.nextLine();
        System.out.println(isPangram(s)==0?"true":"false");
        sc.close();
    }
}
