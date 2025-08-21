import java.util.Scanner;

class Pattern 
{
    public void Pattern(int iRow, int iCol) 
    {
        int i = , j = 0 ;

        if (iRow <= 0 || iCol <= 0) 
        {
            return;
        }

        for (i = 1; i <= iRow; i++) 
        {
            for (j = 1; j <= iCol; j++) 
            {
                if (i == 1 || j == 1 || j == iCol || i == iRow || i == j) 
                {
                    System.out.print(j + "\t");
                } 
                else 
                {
                    System.out.print("\t");
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
        System.out.println("Enter number of rows: ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iValue2 = sobj.nextInt();

        

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1,iValue2);
    }
}