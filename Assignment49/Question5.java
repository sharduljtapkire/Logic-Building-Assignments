import java.util.*;

class Pattern 
{
    public void Pattern(String str) 
    {
        int len = str.length();
        int i = 0, j = 0;

       
        for (i = 0; i < len; i++) 
        {
            for (j = 0; j < len; j++) 
            {
                if (j <= i)   
                {
                    System.out.print(str.charAt(j) + "\t");
                }
                else          
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }

       
        for (i = len - 2; i >= 0; i--) 
        {
            for (j = 0; j < len; j++) 
            {
                if (j <= i) 
                {
                    System.out.print(str.charAt(j) + "\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
    }
}

class Question5 
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
