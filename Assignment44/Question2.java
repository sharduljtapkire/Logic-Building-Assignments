import java.util.*;

class Matrix
{
    private int Arr[][];
    private int iNo = 0;

    public Matrix(int A, int B , int C)
    {
        Arr = new int [A][B];
        iNo = C;
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int CountFrequency()
    {
        int i = 0, j = 0 , iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
                
            }
        }

        return iCount;
    }
}

class Question2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        
        System.out.println("Enter number which you want : ");
        int iValue = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol,iValue);

        mobj.Accept();

        mobj.Display();  

        int iRet = 0;    

        iRet = mobj.CountFrequency();

        System.out.println("Frequency Of "+iValue+ " is : "+iRet);  

    }
}