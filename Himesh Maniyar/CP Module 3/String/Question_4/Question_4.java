import java.util.*;

public class Question_4{

    public static void printDuplicatesInString(String s){
        HashMap<Character,Integer> quantity=new HashMap<Character,Integer>();
        for(int i=0;i<s.length();i++){
            if(quantity.containsKey(s.charAt(i))){
                quantity.put(s.charAt(i),quantity.get(s.charAt(i))+1);
            }
            else{
                quantity.put(s.charAt(i), 1);
            }
        }
        for(Map.Entry<Character,Integer> mapEntry:quantity.entrySet()){
            char key = (char)mapEntry.getKey();
            int value = (int)mapEntry.getValue();
            if (value > 1)
                System.out.println(key+", count=" + value);
        }
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;
        System.out.print("Enter the string: ");
        s=sc.nextLine();
        printDuplicatesInString(s);
        sc.close();
    }
}