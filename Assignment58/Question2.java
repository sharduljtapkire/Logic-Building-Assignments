import java.util.Arrays;
import java.util.Scanner;

class AnagramString
{
    public boolean isAnagrams(String str1, String str2)
    {
        String s1 = str1.replaceAll("\\s", "").toLowerCase();
        String s2 = str2.replaceAll("\\s", "").toLowerCase();

        if (s1.length() != s2.length())
        {
            return false;
        }

        char[] array1 = s1.toCharArray();
        char[] array2 = s2.toCharArray();

        Arrays.sort(array1);
        Arrays.sort(array2);

        return Arrays.equals(array1, array2);
    }
}

class Question2
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String1 : ");
        String str1 = sc.nextLine();
        System.out.print("Enter String2 : ");
        String str2 = sc.nextLine();

        AnagramString obj = new AnagramString();   
        if (obj.isAnagrams(str1, str2))
        {
            System.out.println("Strings are Anagrams!!");
        }
        else
        {
            System.out.println("Strings are not Anagrams!!");
        }
    }
}
