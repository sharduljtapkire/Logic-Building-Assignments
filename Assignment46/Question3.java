import java.util.*;

class Pattern 
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0 , j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++, ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(ch + "\t");
            }
            System.out.println();
        }
    }
}

class Question3
{
    public static void main(String A[])
    {
        int iValue1 = 0 , iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number Of Rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter The Number Of Columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(iValue1,iValue2);
    }
}
