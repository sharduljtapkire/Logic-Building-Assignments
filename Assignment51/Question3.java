import java.util.Scanner;

class MatrixOperations 
{
    public int[][] transposeMatrix(int[][] matrix, int iRow, int iCol) 
    {
        int[][] transposedMatrix = new int[iCol][iRow];
        
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                transposedMatrix[j][i] = matrix[i][j];
            }
        }
        return transposedMatrix;
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

class Question3 
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

        int[][] transposed = mobj.transposeMatrix(matrix, iRow, iCol);

        System.out.println("\nTransposed Matrix:");
        mobj.displayMatrix(transposed, iCol, iRow);
    }
}