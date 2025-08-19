import java.util.*;

class Pattern 
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0 , j = 0;
        char ch = 'A';

        for(i = 0 ; i <= iRow ; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }

    }
}

class Question1
{
    public static void main(String A[])
    {
        int iValue1 = 0 , iValue2 = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number Of Rows :");
        iValue1 = sobj.nextInt();

        
        System.out.println("Enter The Number Of Coloumns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(iValue1,iValue2);
    }
}