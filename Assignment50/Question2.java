import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(j < iCol - i + 1)
                {
                    System.out.print("*\t");
                }
                else if(j == iCol - i + 1) 
                {
                    System.out.print("#\t");
                }
                else   
                {
                    System.out.print("@\t");
                }
            }
            System.out.println();
        }
    }
}

class Question2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1, iValue2);
    }
}
