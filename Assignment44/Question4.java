import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix:");
        Scanner sobj = new Scanner(System.in);

        for (int i = 0; i < Arr.length; i++)
        {
            for (int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are:");
        for (int i = 0; i < Arr.length; i++)
        {
            for (int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public int[] AddColumn()
    {
        int iRow = Arr.length;
        int iCol = Arr[0].length;

        int[] colSum = new int[iCol];

        for (int i = 0; i < iRow; i++)
        {
            for (int j = 0; j < iCol; j++)
            {
                colSum[j] = colSum[j] + Arr[i][j];
            }
        }

        return colSum;
    }
}

class Question4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        int[] colSums = mobj.AddColumn();

        System.out.println("Addition of elements from each column:");
        for (int val : colSums)
        {
            System.out.print(val + " ");
        }
    }
}
