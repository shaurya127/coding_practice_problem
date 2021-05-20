import java.util.*;

public class Question_9{

    public static String swap(String a, int i, int j)
    {
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i] ;
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }

    public static void permute(String str, int l, int r)
    {
        if (l == r)
            System.out.println(str);
        else
        {
            for (int i = l; i <= r; i++)
            {
                str = swap(str,l,i);
                permute(str, l+1, r);
                str = swap(str,l,i);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str;
        System.out.print("Enter the string: ");
        str=sc.next();
        permute(str,0,str.length()-1);
        sc.close();
    }
}