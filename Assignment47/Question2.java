import java.util.*;

class Pattern 
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0 , j = 0;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol; j++)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }

    }
}

class Question2
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