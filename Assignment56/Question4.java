import java.util.Scanner;

class StringX
{
    public String RemoveCharacter(String str, char ch)
    {
        String result = "";
        for(int i=0; i<str.length(); i++)
        {
            if(str.charAt(i) != ch)
            {
                result = result + str.charAt(i);
            }
        }
        return result;
    }
}

class Question4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        System.out.println("Enter character to remove : ");
        char ch = sobj.next().charAt(0);

        StringX obj = new StringX();
        String ans = obj.RemoveCharacter(str, ch);

        System.out.println("Result : " + ans);
    }
}
