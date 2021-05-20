import java.util.*;

public class Question_7{

    public static boolean isSame(ArrayList<String> arr1, ArrayList<String> arr2){
        String str1="",str2="";
        for(int i=0;i<arr1.size();i++){
            str1+=arr1.get(i);
        }
        for(int i=0;i<arr2.size();i++){
            str2+=arr2.get(i);
        }
        return str1.equals(str2);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<String> arr1=new ArrayList<String>();
        ArrayList<String> arr2=new ArrayList<String>();
        int size1,size2;

        System.out.print("Enter the number of list of words in array of word 1: ");
        size1=sc.nextInt();
        System.out.print("Enter the words in array of word 1: ");
        for(int i=0;i<size1;i++){
            arr1.add(sc.next());
        }
        System.out.print("Enter the number of list of words in array of word 1: ");
        size2=sc.nextInt();
        System.out.print("Enter the words in array of word 2: ");
        for(int i=0;i<size2;i++){
            arr2.add(sc.next());
        }

        System.out.println(isSame(arr1,arr2));

        sc.close();
    }
}