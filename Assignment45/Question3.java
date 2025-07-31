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

    public void ReverseColumns()
    {
        System.out.println("Matrix after reversing each column:");

        int top = 0;
        int bottom = Arr.length - 1;

        for(int j = 0; j < Arr[0].length; j++) // for each column
        {
            top = 0;
            bottom = Arr.length - 1;

            while(top < bottom)
            {
                // Swap elements in the column
                int temp = Arr[top][j];
                Arr[top][j] = Arr[bottom][j];
                Arr[bottom][j] = temp;

                top++;
                bottom--;
            }
        }

        Display();
    }
}

class Question3
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

        mobj.ReverseColumns();

    }
}