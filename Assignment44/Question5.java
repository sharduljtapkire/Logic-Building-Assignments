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
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of the matrix:");

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
        System.out.println("Matrix content:");
        for (int i = 0; i < Arr.length; i++)
        {
            for (int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void SwapRows()
    {
        int iRow = Arr.length;
        int iCol = Arr[0].length;

        for (int i = 0; i < iRow - 1; i = i + 2)  // ✅ Your preferred syntax
        {
            for (int j = 0; j < iCol; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
    }
}


class Question5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();

        System.out.println("\nOriginal Matrix:");
        mobj.Display();

        mobj.SwapRows();

        System.out.println("\nMatrix after swapping consecutive rows:");
        mobj.Display();
    }
}
