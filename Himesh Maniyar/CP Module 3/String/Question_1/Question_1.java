import java.util.*;

public class Question_1{

    public static String reverseString(String s){
        String reversedString="";
        for(int i=0;i<s.length();++i){
            reversedString+=s.charAt(s.length()-i-1);
        }
        return reversedString;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the string to be reversed: ");
        String s=sc.nextLine();
        System.out.println("The Reversed String is: "+reverseString(s));
        sc.close();
    }
}