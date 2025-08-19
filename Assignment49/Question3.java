import java.util.*;

class Pattern 
{
    public void Pattern(String str)
    {
        int i = 0 , j = 0 , k = 0;
        for (i = 0; i < str.length(); i++) 
        {
            
            for (j = 0; j <= i; j++) 
            {
                System.out.print(str.charAt(j) + "\t");
            }

            
            for (k = i + 1; k < str.length(); k++) 
            {
                System.out.print("#\t");
            }

            System.out.println();
        }
    }
}

class Question3 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String Str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(Str);
    }
}
