import java.util.*;

class Matrix
{
    private int Arr[][];
    
    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
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

    public void Transpose()
    {
        System.out.println("Transpose of the matrix is :");

        int iRow = Arr.length;
        int iCol = Arr[0].length;

        for(int j = 0; j < iCol; j++)
        {
            for(int i = 0; i < iRow; i++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class Question1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();      

        mobj.Transpose();

    }
}