import java.util.*;

class Pattern 
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0 , j = 0;
        char ch1 = '\0', ch2 = '\0';

        for(i = 1; i <= iRow; i++)
        {
           
            ch1 = 'A';
            ch2 = 'a';

            for(j = 1; j <= iCol; j++)
            {
                if(i % 2 == 0)   
                {
                    System.out.print(ch2 + "\t");
                    ch2++;   
                }
                else             
                {
                    System.out.print(ch1 + "\t");
                    ch1++;   
                }
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

        System.out.println("Enter The Number Of Columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Pattern(iValue1,iValue2);
    }
}
