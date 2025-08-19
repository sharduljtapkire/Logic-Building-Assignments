import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0 , j = 0;
        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(str.charAt(j) + "\t");
            }
            System.out.println();
        }
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String:");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}
