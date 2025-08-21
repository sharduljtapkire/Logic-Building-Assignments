import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0 , j = 0 ;
        
        for(i = 1; i <= iRow; i++)
        {
            
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol || (i + j) == (iRow + 1))
                {
                    System.out.print("*   ");
                }
                else
                {
                    System.out.print("    "); 
                }
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

        System.out.println("enter number of rows : ");
        int iValue1 = sobj.nextInt();

        
        System.out.println("enter number of coloumns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1,iValue2);
    }
}
