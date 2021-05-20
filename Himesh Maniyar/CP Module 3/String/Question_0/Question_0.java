import java.util.*;

public class Question_0 {
    public static int Func(String s){
        char char_manipulated;
        int found,index=-1;
        for(int i=0;i<s.length();++i){
            found=0;
            char_manipulated=s.charAt(i);
            for(int j=i+1;j<s.length();++j){
                if(s.charAt(j)==char_manipulated){
                    found=-1;
                    break;
                }
            }
            for(int j=0;j<i;++j){
                if(s.charAt(j)==char_manipulated){
                    found=-1;
                    break;
                }
            }
            if(found==-1){
                continue;
            }
            else{
                index=i;
                break;
            }
        }
        return index;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;
        System.out.print("Enter the string: ");
        s=sc.nextLine();
        System.out.println(Func(s));
        sc.close();
    }
}
