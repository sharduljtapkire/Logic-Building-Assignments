import java.util.Scanner;

class MatrixOperations 
{
    public void swapConsecutiveColumns(int[][] matrix, int iRow, int iCol) 
    {
        for (int j = 0; j < iCol - 1; j = j + 2) 
        {
            for (int i = 0; i < iRow; i++) 
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j + 1] = temp;
            }
        }
    }

    public void displayMatrix(int[][] matrix, int iRow, int iCol) 
    {
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}

class Question2 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        int[][] matrix = new int[iRow][iCol];

        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                matrix[i][j] = sobj.nextInt();
            }
        }
        
        MatrixOperations mobj = new MatrixOperations();

        System.out.println("\nOriginal Matrix:");
        mobj.displayMatrix(matrix, iRow, iCol);

        mobj.swapConsecutiveColumns(matrix, iRow, iCol);

        System.out.println("\nMatrix after swapping consecutive columns:");
        mobj.displayMatrix(matrix, iRow, iCol);

    }
}