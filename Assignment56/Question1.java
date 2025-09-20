import java.util.Scanner;

class StringX
{
    public boolean Rotation(String str1, String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }
        String temp = str1 + str1;
        return temp.contains(str2);
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet = obj.Rotation(str1, str2);

        System.out.println("Result : " + bRet);
    }
}
