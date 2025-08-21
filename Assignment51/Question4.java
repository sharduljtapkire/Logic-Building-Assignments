import java.util.Scanner;
import java.lang.Math;

class MatrixOperations 
{
    public int trace(int[][] matrix, int iRow, int iCol) 
    {
        if (iRow != iCol) 
        {
            System.out.println("Trace is only defined for square matrices.");
            return -1; 
        }
        int sum = 0;
        for (int i = 0; i < iRow; i++) 
        {
            sum = sum + matrix[i][i];
        }
        return sum;
    }

    public double normal(int[][] matrix, int iRow, int iCol) 
    {
        int sumOfAllElements = 0;
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                sumOfAllElements = sumOfAllElements + (matrix[i][j] * matrix[i][j]);
            }
        }
        return Math.sqrt(sumOfAllElements);
    }
}

class Question4 
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

        int traceValue = mobj.trace(matrix, iRow, iCol);
        if (traceValue != -1) 
        {
            System.out.println("\nTrace of the matrix is: " + traceValue);
        }

        double normalValue = mobj.normal(matrix, iRow, iCol);
        System.out.println("Normal of the matrix is: " + normalValue);
    }
}